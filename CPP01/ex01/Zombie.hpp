/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hspriet <hspriet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:56:38 by hspriet           #+#    #+#             */
/*   Updated: 2023/02/19 11:56:39 by hspriet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iomanip>
#include <iostream>

class Zombie{
    private:
    std::string _name;

    public:
    Zombie(void);
    ~Zombie(void);
    void setName(std::string name);
    void    announce(void);
};

Zombie* zombieHorde( int N, std::string name );