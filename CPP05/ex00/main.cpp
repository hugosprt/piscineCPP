
#include "Bureaucrat.hpp"

int	main ( void ) {

	Bureaucrat Ron("Ron ", 2);

	std::cout << Ron << std::endl;
	Ron.incrGrade();
	std::cout << Ron << std::endl;
	Ron.incrGrade();
	std::cout << Ron << std::endl;

	std::cout << std::endl;

	Bureaucrat Andy("Andy", 149);

	std::cout << Andy << std::endl;
	Andy.decrGrade();
	std::cout << Andy << std::endl;
	Andy.decrGrade();
	std::cout << Andy << std::endl;

	std::cout << std::endl;
	
	Bureaucrat Leslie("Leslie", 0);

	std::cout << Leslie << std::endl;

	std::cout << std::endl;

	Bureaucrat April("April", 151);

	std::cout << April << std::endl;
	
	return ( EXIT_SUCCESS );
}