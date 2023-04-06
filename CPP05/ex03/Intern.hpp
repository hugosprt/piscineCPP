#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Bureaucrat.hpp"

enum forms {

	PRESIDENTIAL_PARDON,
	ROBOTOMY_REQUEST,
	SHRUBBERY_CREATION	
};

class Intern {

	public:

		Intern( void );
		Intern( const Intern & to_copy );
		Intern & operator=( const Intern & toTheRight );
		virtual ~Intern( void );

		
		Form *	makeForm( std::string const form, std::string const target ) const;

	private:
	
		std::string const _printCreation( std::string const form, std::string const target ) const; 
};

#endif