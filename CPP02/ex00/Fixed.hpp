#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
	private:

	int _n;
	int const static _i;

	public:
	Fixed(void);
	Fixed(Fixed const & src);
	Fixed & operator=(Fixed const & src);
	~Fixed(void);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif

