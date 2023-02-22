#include "Dog.hpp"

Dog::Dog(const Dog & src)  : Animal(src), Brain()
{
	std::cout << "|Dog| Copy constructor called" << std ::endl;
	*this = src;
	this->_brain = new Brain();
	return ;
}

Dog Dog::operator=(const Dog & src)
{
	std::cout << "|Dog| Copy assignement operator called" << std ::endl;
	for (int i = 0 ; i < 100 ; i++)
	{
		this->_brain->setIdea(src.getIdea(i), i);
	}
	return (*this);
}

Dog::Dog(void) : Animal(), Brain()
{
	this->_brain = new Brain();
	std::cout << "|Dog| default constructor called" << std ::endl;
	
	return ;
}


Dog::~Dog(void)
{
	std::cout << "|Dog| Destructor called" << std ::endl;
	delete this->_brain;
	return ;
}

Dog::Dog(std::string type) : Animal(type), Brain()
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

void	Dog::setIdea(std::string idea, unsigned int i)
{
	this->_brain->setIdea(idea, i);
}


std::string Dog::getIdea(unsigned int i) const
{
	if (i < 100)
		return this->_brain->getIdea(i);
	std::string str = "no idea here";
	return str;
}

