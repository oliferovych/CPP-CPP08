/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:32:09 by dolifero          #+#    #+#             */
/*   Updated: 2024/12/09 16:30:10 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(100)
{
}

Span::Span(unsigned int N) : _N(N)
{
}

Span::Span(Span const &other)
{
	if(this != &other)
	{
		_N = other._N;
		_v = other._v;
	}
}

Span &Span::operator=(Span const &other)
{
	if(this != &other)
	{
		_N = other._N;
		_v = other._v;
	}
	return *this;
}

Span::~Span()
{
	if(!_v.empty())
		_v.clear();
}

void Span::addNumber(int n)
{
	if(_v.size() >= _N)
		throw FullException();
	_v.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if(_v.size() + distance(begin, end) > _N)
		throw FullException();
	_v.insert(_v.end(), begin, end);
}

int Span::shortestSpan()
{
	if(_v.size() <= 1)
		throw NoSpanException();
	std::sort(_v.begin(), _v.end());
	int min = _v[1] - _v[0];
	for(size_t i = 1; i < _v.size() - 1; i++)
	{
		if(_v[i] - _v[i - 1] < min)
			min = _v[i] - _v[i - 1];
	}
	return min;
}

int Span::longestSpan()
{
	if(_v.size() <= 1)
		throw NoSpanException();
	std::sort(_v.begin(), _v.end());
	return (_v[_v.size() - 1] - _v[0]);
}
const char *Span::FullException::what() const throw()
{
	return "Container is already full";
}

const char *Span::NoSpanException::what() const throw()
{
	return "No span can be found";
}
