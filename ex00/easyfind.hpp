/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:33:56 by dolifero          #+#    #+#             */
/*   Updated: 2024/11/18 15:13:25 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

class NotFoundException : public std::exception
{
	virtual const char *what() const throw()
	{
		return "Not found";
	}
};

template <typename T>
T easyfind(T &container, int n)
{
	typename T::iterator it = std::find(container.begin(), container.end(), n);
	if (it != n)
		throw NotFoundException();
	return *it;
}

#endif
