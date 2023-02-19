/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hspriet <hspriet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:56:51 by hspriet           #+#    #+#             */
/*   Updated: 2023/02/19 11:56:52 by hspriet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iomanip>
#include <iostream>

class Zombie{
    private:
    std::string _name;

    public:
    Zombie(std::string name);
    ~Zombie(void);
    void    announce(void);
};
    Zombie* newZombie( std::string name);
    void randomChump( std::string name);
