#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat( void ) :
{
	
	return;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) 
{
	this->_name = src.getName();
	this->_grade = src.getGrade();

	return;
}

Bureaucrat & Bureaucrat::operator=( const Bureaucrat & src ) 
{

	std::string * namePTR = ( std::string * )&this->_name;
	
	*namePTR = src.getName();
	this->_grade = src.getGrade();
	return ( *this );
}

Bureaucrat::~Bureaucrat( void ) {

	return;
}

Bureaucrat::Bureaucrat( const std::string name, const unsigned int grade )
{
	
	this->_name = src.getName();
	this->_grade = src.getGrade();
	try {
		
		if ( grade < HIGHEST_POSSIBLE_GRADE ) {
		
			this->_grade = 1;
			throw ( Bureaucrat::GradeTooHighException() );
		}
		else if ( grade > LOWEST_POSSIBLE_GRADE ) {
		
			this->_grade = 150;
			throw ( Bureaucrat::GradeTooLowException() );
		}
		else
			this->_grade = grade;
	}
	catch (std::exception & e) {
		
		std::cout << e.what() << std::endl;
	}
	return;
}

void	Bureaucrat::incrGrade( void ) {
	
	try {
		
		if ( this->_grade == HIGHEST_POSSIBLE_GRADE )
			throw ( Bureaucrat::GradeTooHighException() );
		else
			this->_grade--;
	}
	catch (std::exception & e) {
		
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::decrGrade( void ) {

	try {
		
		if ( this->_grade == LOWEST_POSSIBLE_GRADE )
			throw ( Bureaucrat::GradeTooLowException() );
		else
			this->_grade++;
	}
	catch (std::exception & e) {
		
		std::cout << e.what() << std::endl;
	}
}

unsigned int	Bureaucrat::getGrade( void ) const {
	
	return ( this->_grade );
}

std::string	Bureaucrat::getName( void ) const {
	
	return ( this->_name );
}

const char*	Bureaucrat::GradeTooHighException::what( void ) const throw() {
	
	return ("Grade is too high !");
}

const char*	Bureaucrat::GradeTooLowException::what( void ) const throw() {

	return ("Grade is too low !");
}
