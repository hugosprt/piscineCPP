#ifndef DOG_HPP

# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
	Dog(void);
	Dog(std::string type);
	Dog(const Dog & src);
	Dog operator=(const Dog &  src);
	virtual ~Dog(void);
	virtual void makeSound(void) const;
	std::string getType(void) const;
};


#endif