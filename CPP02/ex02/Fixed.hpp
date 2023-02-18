#ifndef FIXED_HPP
# define FIXED_HPP

#include <cstdlib>
#include <cmath>
#include <iostream>

class Fixed{
	private:

	int _n;
	int const static _i;

	public:
	Fixed(void);
	Fixed(int const n);
	Fixed(float const f);
	Fixed(Fixed const & src);
	Fixed & operator=(Fixed const & src);
	~Fixed(void);
	bool  operator<(Fixed const & src) const;
	bool  operator>(Fixed const & src) const;
	bool  operator<=(Fixed const & src) const;
	bool  operator>=(Fixed const & src) const;
	bool  operator==(Fixed const & src) const;
	bool  operator!=(Fixed const & src) const;
	Fixed operator+(Fixed const & src) const;
	Fixed operator-(Fixed const & src) const;
	Fixed operator*(Fixed const & src) const;
	Fixed operator/(Fixed const & src) const;
	Fixed operator++(int);
	Fixed operator++(void);
	Fixed operator--(int);
	Fixed operator--(void);
	static Fixed & max(Fixed & nb1, Fixed & nb2);
	static const Fixed  & max(Fixed const & nb1, Fixed const & nb2);
	static Fixed & min(Fixed & nb1, Fixed & nb2);
	static const Fixed  & min(Fixed const & nb1, Fixed const & nb2);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & src);

#endif

