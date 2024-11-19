/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolifero <dolifero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:33:42 by dolifero          #+#    #+#             */
/*   Updated: 2024/11/18 15:04:51 by dolifero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	int[5] arr = {1, 2, 3, 4, 5};

	try
	{
		std::cout << easyfind(arr, 3) << std::endl;
		std::cout << easyfind(arr, 6) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}
}
