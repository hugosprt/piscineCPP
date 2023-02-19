/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hspriet <hspriet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:56:41 by hspriet           #+#    #+#             */
/*   Updated: 2023/02/19 11:56:42 by hspriet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



Zombie::Zombie(void){  
    return ;
}

Zombie::~Zombie(void){
   std::cout << "Zombie instance <" << this->_name << "> destroyed." << std::endl;
   return ;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

void    Zombie::announce(void){
    std::cout << "<" << this->_name << "> : BraiiiiiiinnnzzzZ..." << std::endl;
}