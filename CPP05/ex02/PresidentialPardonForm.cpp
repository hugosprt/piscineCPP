#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : Form("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
    : Form(src), _target(src._target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
    if (this != &rhs)
    {
        Form::operator=(rhs);
        _target = rhs._target;
    }
    return *this;
}

void PresidentialPardonForm::action() const
{

    std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
