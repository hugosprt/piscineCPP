/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hspriet <hspriet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:55:54 by hspriet           #+#    #+#             */
/*   Updated: 2023/02/19 11:55:55 by hspriet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>
#include <cstdlib>
class Harl{
	private:
	
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);


	public:

	Harl(void);
	~Harl(void);

	void	complain(std::string level);
	

};

#endif