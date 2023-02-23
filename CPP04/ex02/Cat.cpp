#include "Cat.hpp"

Cat::Cat(const Cat & src) : Animal(src)
{
	std::cout << "|Cat| Copy constructor called" << std ::endl;
	this->_brain = new Brain();
	*this = src;
	return ;
}

Cat & Cat::operator=(const Cat & src)
{
	std::cout << "|Cat| Copy assignement operator called" << std ::endl;
	if (this == &src)
		return ( *this );
	delete this->_brain;
	this->_brain = new Brain();
	this->_type = src._type;
	*this->_brain = *src._brain;
	return (*this);
}

Cat::Cat(void) : Animal()
{
	std::cout << "|Cat| default constructor called" << std ::endl;
	this->_brain = new Brain();
	this->_type = "Cat";
	return ;
}


Cat::~Cat(void)
{
	std::cout << "|Cat| Destructor called" << std ::endl;
	delete this->_brain;
	return ;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "|Cat| Constructor with name called" << std ::endl;
	this->_type = type;
	return ; 
}

void Cat::makeSound(void) const
{
		std::cout << "Miaou Miaou" << std::endl;
}

std::string Cat::getType(void) const
{
	return this->_type;
}

void	Cat::setIdea(std::string idea, unsigned int i)
{
	this->_brain->setIdea(idea, i);
}


std::string Cat::getIdea(unsigned int i) const
{
	if (i < 100)
		return this->_brain->getIdea(i);
	std::string str = "no idea here";
	return str;
}
