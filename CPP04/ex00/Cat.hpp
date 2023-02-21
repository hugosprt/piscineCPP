#ifndef CAT_HPP

# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
	Cat(void);
	Cat(std::string type);
	Cat(const Cat & src);
	Cat operator=(const Cat &  src);
	~Cat(void);
	virtual void makeSound(void) const;
	std::string getType(void) const;
};


#endif