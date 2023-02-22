#ifndef ANIMAL_HPP

# define ANIMAL_HPP

#include <iostream>

class Animal{

	protected:
	std::string _type;

	public:
	Animal(void);
	Animal(std::string type);
	Animal(const Animal & src);
	Animal& operator=(const Animal &  src);
	virtual ~Animal(void);
	virtual void makeSound(void) const = 0;
	std::string getType(void) const;

};



#endif