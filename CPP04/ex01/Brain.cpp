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
	for (int i = 0 ; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	return (*this);

}

Brain::Brain(void)
{
	std::cout << "|Brain| default constructor called" << std ::endl;
	return ;
}


Brain::~Brain(void)
{
	std::cout << "|Brain| Destructor called" << std ::endl;
	return ;
}

void	Brain::setIdea(std::string idea, unsigned int i)
{
	if (i < 100)
		this->_ideas[i] = idea;
	else
		std::cout << "brain small pls no more than 100" << std::endl;
}


std::string Brain::getIdea(unsigned int i)
{
	if (i < 100)
		return this->_ideas[i];
	std::string str = "no idea here";
	return str;
}
