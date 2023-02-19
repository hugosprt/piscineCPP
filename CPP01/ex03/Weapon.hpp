/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hspriet <hspriet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:56:05 by hspriet           #+#    #+#             */
/*   Updated: 2023/02/19 11:56:06 by hspriet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>


class Weapon{

	private:

	std::string _type;
	

	public:

	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);

	std::string const & getType() const;
	void setType(std::string type);
};

#endif