#ifndef DOG_HPP

# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

	private:

	Brain* _brain;
	
	public:
	Dog(void);
	Dog(std::string type);
	Dog(const Dog & src);
	Dog & operator=(const Dog &  src);
	virtual ~Dog(void);
	virtual void makeSound(void) const;
	std::string getType(void) const;
	void setIdea(std::string idea, unsigned int i);
	std::string getIdea(unsigned int i) const;
};


#endif