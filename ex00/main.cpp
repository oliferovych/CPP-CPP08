/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:33:42 by dolifero          #+#    #+#             */
/*   Updated: 2024/11/19 15:25:24 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>

int main(void)
{
	std::vector<int> vec_int({123, 4, 14, 2, 2414, 1});

	try
	{
		std::cout << *easyfind(vec_int, 2414) << std::endl;
		std::cout << *easyfind(vec_int, 0) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}
	return (0);
}
