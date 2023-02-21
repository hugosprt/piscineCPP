#include "Cat.hpp"

Cat::Cat(const Cat & src) : Animal(src)
{
	std::cout << "|Cat| Copy constructor called" << std ::endl;
	*this = src;
	return ;
}

Cat Cat::operator=(const Cat & src)
{
	std::cout << "|Cat| Copy assignement operator called" << std ::endl;
	this->_type = src._type;
	return (*this);

}

Cat::~Cat(void)
{
	std::cout << "|Cat| default constructor called" << std ::endl;
	return ;
}


Cat::Cat(void) : Animal()
{
	std::cout << "|Cat| Destructor called" << std ::endl;
	return ;
}

Cat::Cat(std::string type)  : Animal(type)
{
	std::cout << "|Cat| Constructor with name called" << std ::endl;
	this->_type = type;
	return ; 
}

void Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;

}

std::string Cat::getType(void) const
{
	return this->_type;
}