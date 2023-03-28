#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
    : Form(src), _target(src._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    if (this != &rhs)
    {
        Form::operator=(rhs);
        _target = rhs._target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
  //  if (!isSigned())
    //    throw Form::NotSignedException();
    if (executor.getGrade() > getGradeToExecute())
        throw Form::GradeTooLowException();

    std::ofstream file(_target + "_shrubbery");

    if (!file.is_open())
    {
        std::cerr << "Cannot open the file." << std::endl;
        return;
    }

    file << "          &&& &&  & &&" << std::endl;
    file << "      && &\\/&\\*()_ /\\/&& &&" << std::endl;
    file << "        && ()_/{\\(_&&" << std::endl;
    file << "            &&&& &&  &&" << std::endl;
    file << "              &&" << std::endl;

    file.close();
}
