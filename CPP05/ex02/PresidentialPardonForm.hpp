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

    virtual void execute(const Bureaucrat &executor) const;

private:
    PresidentialPardonForm();
    std::string _target;
};

#endif // PRESIDENTIALPARDONFORM_HPP
