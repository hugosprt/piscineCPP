#ifndef FIXED_HPP
# define FIXED_HPP

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
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & src);

#endif

