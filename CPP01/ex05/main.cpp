/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hspriet <hspriet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:55:58 by hspriet           #+#    #+#             */
/*   Updated: 2023/02/19 11:55:59 by hspriet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Harl.hpp"

int main( void ) {

	Harl harl;

	harl.complain("DEBUG");
	
	std::cout << std::endl;

	harl.complain("INFO");

	std::cout << std::endl;

	harl.complain("WARNING");

	std::cout << std::endl;

	harl.complain("ERROR");

	std::cout << std::endl;

	harl.complain("UNKNOWNED");

	return 0;
}
