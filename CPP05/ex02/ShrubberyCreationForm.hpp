#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include "Form.hpp"
class Form;
class Bureaucrat;

class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &src);
    ~ShrubberyCreationForm();
    void execute(const Bureaucrat &executor) const; 

    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);


private:
    ShrubberyCreationForm();

    std::string _target;
};



#endif 
