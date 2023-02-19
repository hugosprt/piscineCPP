/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hspriet <hspriet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:56:48 by hspriet           #+#    #+#             */
/*   Updated: 2023/02/19 11:56:49 by hspriet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



Zombie::Zombie(std::string name){
    this->_name = name;
    return ;
}

Zombie::~Zombie(void){
   std::cout << "Zombie instance <" << this->_name << "> destroyed." << std::endl;
   return ;
}

void    Zombie::announce(void){
    std::cout << "<" << this->_name << "> : BraiiiiiiinnnzzzZ..." << std::endl;
}
