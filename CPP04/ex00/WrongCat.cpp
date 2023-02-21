#include "WrongCat.hpp"

WrongCat::WrongCat(const WrongCat & src) : WrongAnimal(src)
{
	std::cout << "|WrongCat| Copy constructor called" << std ::endl;
	*this = src;
	return ;
}

WrongCat WrongCat::operator=(const WrongCat & src)
{
	std::cout << "|WrongCat| Copy assignement operator called" << std ::endl;
	this->_type = src._type;
	return (*this);

}

WrongCat::~WrongCat(void)
{
	std::cout << "|WrongCat| default constructor called" << std ::endl;
	return ;
}


WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "|WrongCat| Destructor called" << std ::endl;
	return ;
}

WrongCat::WrongCat(std::string type)  : WrongAnimal(type)
{
	std::cout << "|WrongCat| Constructor with name called" << std ::endl;
	this->_type = type;
	return ; 
}

void WrongCat::makeSound(void) const
{
	std::cout << "Mewwwwwwwwwwwww" << std::endl;

}

std::string WrongCat::getType(void) const
{
	return this->_type;
}