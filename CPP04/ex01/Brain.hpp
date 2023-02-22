#ifndef BRAIN_HPP

# define BRAIN_HPP
#include <iostream>

class Brain{


	private:
	std::string _ideas[100];

	public:
	Brain(void);

	Brain(const Brain & src);
	Brain operator=(const Brain &  src);
	~Brain(void);
	void setIdea(std::string idea, unsigned int i);
	std::string getIdea(unsigned int i);
};

#endif