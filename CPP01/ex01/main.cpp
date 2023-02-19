/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hspriet <hspriet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:56:45 by hspriet           #+#    #+#             */
/*   Updated: 2023/02/19 11:56:46 by hspriet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int const count = 42;
	Zombie *horde = zombieHorde(count, "zombie");

	horde->announce();
	for (int i = 0; i < count; i++)
		horde[i].announce();
	delete [] horde;
}