#include "Cat.hpp"

Cat::Cat(const Cat & src)  : Animal(src), Brain()
{
	std::cout << "|Cat| Copy constructor called" << std ::endl;
	*this = src;
	this->_brain = new Brain();
	return ;
}

Cat Cat::operator=(const Cat & src)
{
	std::cout << "|Cat| Copy assignement operator called" << std ::endl;
	for (int i = 0 ; i < 100 ; i++)
	{
		this->_brain->setIdea(src.getIdea(i), i);
	}
	return (*this);
}

Cat::Cat(void) : Animal(), Brain()
{
	this->_brain = new Brain();
	std::cout << "|Cat| default constructor called" << std ::endl;
	
	return ;
}


Cat::~Cat(void)
{
	std::cout << "|Cat| Destructor called" << std ::endl;
	delete this->_brain;
	return ;
}

Cat::Cat(std::string type) : Animal(type), Brain()
{
	std::cout << "|Cat| Constructor with name called" << std ::endl;
	this->_type = type;
	return ; 
}

void Cat::makeSound(void) const
{
		std::cout << "miaou miaou" << std::endl;
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
