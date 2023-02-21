#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal(const WrongAnimal & src)
{
	std::cout << "|WrongAnimal| Copy constructor called" << std ::endl;
	*this = src;
	return ;
}

WrongAnimal WrongAnimal::operator=(const WrongAnimal &  src)
{
	std::cout << "|WrongAnimal| Copy assignement operator called" << std ::endl;
	this->_type = src._type;
	return (*this);

}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "|WrongAnimal| default constructor called" << std ::endl;
	return ;
}


WrongAnimal::WrongAnimal(void)
{
	std::cout << "|WrongAnimal| Destructor called" << std ::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "|WrongAnimal| Constructor with name called" << std ::endl;
	this->_type = type;
	return ; 
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Wroooooong animal" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return this->_type;
}
