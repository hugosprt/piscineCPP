/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hspriet <hspriet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:56:30 by hspriet           #+#    #+#             */
/*   Updated: 2023/02/19 11:56:31 by hspriet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
    std::string str = "HI THIS IS BRAIN";

    std::string* ptr_str = &str;
    std::string& ref_str = str;

    std::cout << "adress of the string : " << &str << std::endl;
    std::cout << "adress of the pointer : " << ptr_str << std::endl;
    std::cout << "adress of the ref : " << &ref_str << std::endl;
    std::cout << std::endl;
    std::cout << "value of the string : " << str << std::endl;
    std::cout << "value of the pointer : " << *ptr_str << std::endl;
    std::cout << "value of the ref : " << ref_str << std::endl;

    return 0;
}