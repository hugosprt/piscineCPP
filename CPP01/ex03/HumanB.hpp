/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hspriet <hspriet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:56:16 by hspriet           #+#    #+#             */
/*   Updated: 2023/02/19 11:56:17 by hspriet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	private:
	std::string  _name;
	Weapon *  _weapon;
	public:

	HumanB(std::string name);
	~HumanB(void);	
	void attack(void);
	void setWeapon(Weapon & weapon);

};

#endif