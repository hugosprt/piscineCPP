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

void ShrubberyCreationForm::action(void) const
{
  //  if (!isSigned())
    //    throw Form::NotSignedException();
    std::fstream file;
    std::string file_name;
    file_name = _target;
    file_name.append("_shrubbery");
    file.open(file_name.c_str(), std::ios::out | std::ios::in | std::ios::trunc);
    if (!file)
        std::cout << "ERROR CREATING FILE" << std::endl;

    file << "          &&& &&  & &&" << std::endl;
    file << "      && &\\/&\\*()_ /\\/&& &&" << std::endl;
    file << "        && ()_/{\\(_&&" << std::endl;
    file << "            &&&& &&  &&" << std::endl;
    file << "              &&" << std::endl;
    file.close();
}
