/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:27:51 by dolifero          #+#    #+#             */
/*   Updated: 2024/11/19 15:58:19 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>

class Span
{
	private:
		unsigned int _N;
		std::vector<int> _v;
	public:
		//Constructors
		Span();
		Span(unsigned int N);
		Span(Span const &other);
		//Operator "=" overload
		Span &operator=(Span const &other);
		//Destructor
		~Span();
		//Methods
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
	//Exceptions
	class FullException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class NoSpanException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

#endif
