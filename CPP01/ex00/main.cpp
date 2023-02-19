/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hspriet <hspriet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:57:00 by hspriet           #+#    #+#             */
/*   Updated: 2023/02/19 11:57:01 by hspriet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie1("zombie1");
	Zombie *zombie2 = newZombie("zombie2");
	zombie1.announce();
	zombie2->announce();
	randomChump("zombie3");
	delete zombie2;
}
