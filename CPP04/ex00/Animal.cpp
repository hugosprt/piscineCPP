#include "Animal.hpp"


Animal::Animal(const Animal & src)
{
	std::cout << "|Animal| Copy constructor called" << std ::endl;
	*this = src;
	return ;
}

Animal Animal::operator=(const Animal &  src)
{
	std::cout << "|Animal| Copy assignement operator called" << std ::endl;
	this->_type = src._type;
	return (*this);

}

Animal::~Animal(void)
{
	std::cout << "|Animal| default constructor called" << std ::endl;
	return ;
}


Animal::Animal(void)
{
	std::cout << "|Animal| Destructor called" << std ::endl;
	return ;
}

Animal::Animal(std::string type)
{
	std::cout << "|Animal| Constructor with name called" << std ::endl;
	this->_type = type;
	return ; 
}

void Animal::makeSound(void) const
{

}

std::string Animal::getType(void) const
{
	return this->_type;
}
