#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat;

class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &src);
    ~PresidentialPardonForm();

    PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);

    void execute(const Bureaucrat &executor) const; 

private:
    
    std::string _target;
};



#endif // PRESIDENTIALPARDONFORM_HPP
