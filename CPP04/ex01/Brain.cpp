#include "Brain.hpp"

Brain::Brain(const Brain & src)
{
	std::cout << "|Brain| Copy constructor called" << std ::endl;
	*this = src;
	return ;
}

Brain Brain::operator=(const Brain &  src)
{
	std::cout << "|Brain| Copy assignement operator called" << std ::endl;
	if (this == &src)
		return (*this);
	this->_ideas = src._ideas;
	return (*this);

}

Brain::~Brain(void)
{
	std::cout << "|Brain| default constructor called" << std ::endl;
	return ;
}


Brain::Brain(void)
{
	std::cout << "|Brain| Destructor called" << std ::endl;
	return ;
}

Brain::Brain(std::string type)
{
	std::cout << "|Brain| Constructor with name called" << std ::endl;
	this->_type = type;
	return ; 
}