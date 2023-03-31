#include "Bureaucrat.hpp"
#include "Form.hpp"


Bureaucrat::Bureaucrat( void )
{
	return;
}
Bureaucrat::Bureaucrat( const std::string name, const unsigned int grade ) :
	_name(name), _grade(grade)
{
	try {
		if ( grade < HIGHEST_POSSIBLE_GRADE ) {
			this->_grade = HIGHEST_POSSIBLE_GRADE;
			throw ( Bureaucrat::GradeTooHighException() );
		} else if ( grade > LOWEST_POSSIBLE_GRADE ) {
			this->_grade = LOWEST_POSSIBLE_GRADE;
			throw ( Bureaucrat::GradeTooLowException() );
		}
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) :
	_name(src.getName()), _grade(src.getGrade())
{
	return;
}

Bureaucrat & Bureaucrat::operator=( const Bureaucrat & src ) 
{
	if (this == &src) {
		return *this;
	}
	std::string * namePTR = ( std::string * )&this->_name;
	*namePTR = src.getName();
	this->_grade = src.getGrade();
	return ( *this );
}


Bureaucrat::~Bureaucrat( void ) {

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


int	Bureaucrat::getGrade( void ) const {
	
	return ( this->_grade );
}

std::string	Bureaucrat::getName( void ) const {
	
	return ( this->_name );
}

void Bureaucrat::executeForm(Form const &form) const
{
    try
    {
        form.execute(*this);
        std::cout << *this << " executed " << form << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << *this << " cannot execute " << form << " because " << e.what() << std::endl;
    }
}


const char*	Bureaucrat::GradeTooHighException::what( void ) const throw() {
	
	return ("Grade is too high !");
}

const char*	Bureaucrat::GradeTooLowException::what( void ) const throw() {

	return ("Grade is too low !");
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}


std::ostream &	operator<<( std::ostream & o,  Bureaucrat const & b ) {
	o << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return o;
}