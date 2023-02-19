/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hspriet <hspriet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:56:26 by hspriet           #+#    #+#             */
/*   Updated: 2023/02/19 11:56:27 by hspriet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & weapon): _name(name), _weapon(weapon)
{
	return;
}


HumanA::~HumanA(void)
{
	return ;
}


void HumanA::attack(void)
{
	std::cout  << this->_name << " attacks with their " << this->_weapon.getType() << std::endl; 
}