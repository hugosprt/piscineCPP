/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hspriet <hspriet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:56:09 by hspriet           #+#    #+#             */
/*   Updated: 2023/02/19 11:56:10 by hspriet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


 Weapon::Weapon(std::string type)
{
	this->_type = type;
	return ;
}

 Weapon::Weapon(void)
{
	this->_type = "default";
	return ;
}

 Weapon::~Weapon(void)
{
	return ;
}

std::string const & Weapon::getType() const{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}