#ifndef CAT_HPP

# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{

	private:

	Brain* _brain;
	
	public:
	Cat(void);
	Cat(std::string type);
	Cat(const Cat & src);
	Cat & operator=(const Cat &  src);
	virtual ~Cat(void);
	virtual void makeSound(void) const;
	std::string getType(void) const;
	void setIdea(std::string idea, unsigned int i);
	std::string getIdea(unsigned int i) const;
};


#endif