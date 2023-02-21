#ifndef WRONGCAT_HPP

# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
	WrongCat(void);
	WrongCat(std::string type);
	WrongCat(const WrongCat & src);
	WrongCat operator=(const WrongCat &  src);
	~WrongCat(void);
	void makeSound(void) const;
	std::string getType(void) const;
};


#endif