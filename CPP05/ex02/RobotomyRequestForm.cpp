#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"
#include "Form.hpp"
RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
    : Form(src), _target(src._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
    if (this != &rhs)
    {
        Form::operator=(rhs);
        _target = rhs._target;
    }
    return *this;
}

void RobotomyRequestForm::action() const
{

    std::cout << "* Drilling noises *" << std::endl;
    std::srand(std::time(NULL));
    if (std::rand() % 2)
        std::cout << _target << " has been robotomized successfully." << std::endl;
    else
        std::cout << "The robotomy of " << _target << " failed." << std::endl;
}
