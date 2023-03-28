#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>


class Form;
class Bureaucrat;

class RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm(const RobotomyRequestForm &src);
    ~RobotomyRequestForm();

    RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);

    void execute(const Bureaucrat &executor) const;

private:
    RobotomyRequestForm();
    std::string _target;
};

#endif // ROBOTOMYREQUESTFORM_HPP
