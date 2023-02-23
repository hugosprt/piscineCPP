#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat{

	private:

	const std::string	_name;
	int					_grade;

	public :
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat & src);
	Bureaucrat & operator=(Bureaucrat const & src);
	virtual ~Bureaucrat(void);
	std::string getName(void);
	void		setName(std::string name);
	void		incrGrade(void);
	void		decrGrade(void);
};


#endif 