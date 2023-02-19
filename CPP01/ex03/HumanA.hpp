/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hspriet <hspriet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:56:22 by hspriet           #+#    #+#             */
/*   Updated: 2023/02/19 11:56:23 by hspriet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
	private:
	std::string  _name;
	Weapon &  _weapon;
	public:

	HumanA(std::string name, Weapon & weapon);
	~HumanA(void);	
	void attack(void);

};

#endif