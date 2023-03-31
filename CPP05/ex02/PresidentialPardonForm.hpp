#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>


class Form;
class Bureaucrat;

class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &src);
    ~PresidentialPardonForm();

    PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);

     void action(void) const;

private:
    
    std::string _target;
};

#endif // PRESIDENTIALPARDONFORM_HPP
