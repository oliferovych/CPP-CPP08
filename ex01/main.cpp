/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:33:42 by dolifero          #+#    #+#             */
/*   Updated: 2024/12/09 16:28:41 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <random>

int main(void)
{
	std::random_device rd;
	std::mt19937 gen(rd());

	Span sp0 = Span(10);
	std::uniform_int_distribution<> dis0(1, 100);
	for(int i = 0; i < 10; i++)
		sp0.addNumber(dis0(gen));
	std::cout << "10 random numbers in the range of 1 to 100" << std::endl;
	std::cout << "Shortest span: " << sp0.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp0.longestSpan() << std::endl;
	std::cout << std::endl;

	Span sp1 = Span(100);
	std::uniform_int_distribution<> dis1(1, 1000);
	for(int i = 0; i < 100; i++)
		sp1.addNumber(dis1(gen));
	std::cout << "100 random numbers in the range of 1 to 1000" << std::endl;
	std::cout << "Shortest span: " << sp1.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp1.longestSpan() << std::endl;
	std::cout << std::endl;

	Span sp2 = Span(10000);
	std::uniform_int_distribution<> dis2(1, 1000000);
	for(int i = 0; i < 10000; i++)
		sp2.addNumber(dis2(gen));
	std::cout << "10000 random numbers in the range of 1 to 1000000" << std::endl;
	std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
	std::cout << std::endl;

	std::vector<int> v;
	for(int i = 0; i < 10; i++)
		v.push_back(dis0(gen));
	Span sp3 = Span(10);
	sp3.addNumber(v.begin(), v.end());
	std::cout << "10 random numbers in the range of 1 to 100 added to span at once" << std::endl;
	std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp3.longestSpan() << std::endl;
	return (0);
}
