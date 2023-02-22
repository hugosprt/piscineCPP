#include "Fixed.hpp"

int const Fixed::_i = 8;

Fixed::Fixed(void)
{
	this->_n = 0;
	std::cout << "Default constructor called" << std ::endl;
	return ;
}

Fixed::Fixed(const Fixed & src)
{
	std::cout << "Copy constructor called" << std ::endl;
	*this = src;	
}

Fixed & Fixed::operator=(Fixed const & src){

	std::cout << "Copy assignement operator called" << std ::endl;
	if (this == &src)
		return (*this);
	this->_n= src.getRawBits();
	return *this;
}


Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int Fixed::getRawBits(void) const {
	
	std::cout << "getRawbits member function called" << std::endl;
	return (this->_n);
}

void Fixed::setRawBits(int const raw){
	this->_n = raw;
}


