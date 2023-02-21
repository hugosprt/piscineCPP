#include "Dog.hpp"

Dog::Dog(const Dog & src)  : Animal(src)
{
	std::cout << "|Dog| Copy constructor called" << std ::endl;
	*this = src;
	return ;
}

Dog Dog::operator=(const Dog & src)
{
	std::cout << "|Dog| Copy assignement operator called" << std ::endl;
	this->_type = src._type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "|Dog| default constructor called" << std ::endl;
	return ;
}


Dog::Dog(void) : Animal()
{
	std::cout << "|Dog| Destructor called" << std ::endl;
	return ;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "|Dog| Constructor with name called" << std ::endl;
	this->_type = type;
	return ; 
}

void Dog::makeSound(void) const
{
		std::cout << "ouaf ouaf" << std::endl;
}

std::string Dog::getType(void) const
{
	return this->_type;
}