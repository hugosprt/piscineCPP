#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <string>

class Form;
class Bureaucrat;

class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &src);
     ~ShrubberyCreationForm();

    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);

    void action() const;

private:
    ShrubberyCreationForm();

    std::string _target;
};

#endif 
