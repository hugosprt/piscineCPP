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

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std ::endl;
	this->_n = n * (1 << this->_i);
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called" << std ::endl;
	this->_n = static_cast<int>(roundf( n * (1 << this->_i)));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int Fixed::getRawBits(void) const {
	
	// std::cout << "getRawbits member function called" << std::endl;
	return (this->_n);
}

void Fixed::setRawBits(int const raw){
	this->_n = raw;
}

float Fixed::toFloat(void) const
{
	return (float) this->_n / ( 1 << this->_i);
}

int Fixed::toInt(void) const{

	return this->_n / ( 1 << this->_i);
}

std::ostream & operator<<(std::ostream &o, Fixed const &src)
{
	o << src.toFloat();
	return o;
}


bool Fixed::operator<(Fixed const & src) const {

	if (this->getRawBits() < src.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>(Fixed const & src) const {

	if (this->getRawBits() > src.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(Fixed const & src) const {

	if (this->getRawBits() <= src.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(Fixed const & src) const {

	if (this->getRawBits() >= src.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==(Fixed const & src) const {

	if (this->getRawBits() == src.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(Fixed const & src) const {

	if (this->getRawBits() != src.getRawBits())
		return (true);
	return (false);
}

Fixed Fixed::operator+(Fixed const & src) const {
	return Fixed(this->toFloat() + src.toFloat());
}

Fixed Fixed::operator-(Fixed const & src) const {
	return Fixed(this->toFloat() - src.toFloat());
}

Fixed Fixed::operator*(Fixed const & src) const {
	return Fixed(this->toFloat() * src.toFloat());
}

Fixed Fixed::operator/(Fixed const & src) const {
	return Fixed(this->toFloat() / src.toFloat());
}

Fixed Fixed::operator++(int) {

	Fixed tmp = *this;

	this->setRawBits(this->getRawBits() + 1);
	return (tmp);
}


Fixed Fixed::operator++(void)  {

	 this->setRawBits(this->getRawBits() + 1);

	return *this;
}

Fixed Fixed::operator--(int) {

	Fixed tmp = *this;

	this->setRawBits(this->getRawBits() - 1);
	return (tmp);
}


Fixed Fixed::operator--(void)  {

	 this->setRawBits(this->getRawBits() - 1);

	return *this;
}

Fixed & Fixed::max(Fixed & nb1, Fixed & nb2)
{
	if (nb1 < nb2)
	{
		return nb2;
	}
	return nb1;
}

const Fixed & Fixed::max(Fixed const & nb1, Fixed const  & nb2)
{
	if (nb1 < nb2)
	{
		return nb2;
	}
	return nb1;
}

Fixed & Fixed::min(Fixed & nb1, Fixed & nb2)
{
	if (nb1 > nb2)
	{
		return nb2;
	}
	return nb1;
}

const Fixed & Fixed::min(Fixed const & nb1, Fixed const  & nb2)
{
	if (nb1 > nb2)
	{
		return nb2;
	}
	return nb1;
}