
#include "Bureaucrat.hpp"
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat b1("Alice", 1);
        Bureaucrat b2("Bob", 150);
        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;

        Form f1("Form1", 1, 1);
        Form f2("Form2", 150, 150);
        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;

        b1.signForm(f1);
        std::cout << f1 << std::endl;

        b1.signForm(f2);
        std::cout << f2 << std::endl;

        b2.signForm(f1);
        std::cout << f1 << std::endl;

        b2.signForm(f2);
        std::cout << f2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat b3("Charlie", 0);
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        Form f3("Form3", 0, 1);
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
