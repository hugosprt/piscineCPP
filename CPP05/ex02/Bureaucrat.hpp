#ifndef BUREAUCRAT_HPP

#define BUREAUCRAT_HPP

#include"PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"


class Bureaucrat
{

public:


Bureaucrat( void );
Bureaucrat( const Bureaucrat & src );
Bureaucrat & operator=( const Bureaucrat & src );
~Bureaucrat( void );

Bureaucrat( const std::string name, const unsigned int grade );
void	incrGrade( void );
void	decrGrade( void );
void signForm(Form &form);
int	getGrade( void ) const;
std::string		getName( void ) const;
class GradeTooHighException : public std::exception {
	
	public:
		const char* what( void ) const throw();
};
class GradeTooLowException : public std::exception {
	
	public:
		const char* what( void ) const throw();
};


void executeForm(Form const &form) const;
private:

std::string const	_name;
unsigned int		_grade;

static const unsigned int	HIGHEST_POSSIBLE_GRADE = 1;
static const unsigned int	LOWEST_POSSIBLE_GRADE = 150;
};
std::ostream &	operator<<( std::ostream & o, Bureaucrat const & b );

#endif