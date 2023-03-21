#include "Form.hpp"

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute)
    : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &src)
    : _name(src._name), _isSigned(src._isSigned), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
}

Form::~Form() {}

Form &Form::operator=(const Form &rhs)
{
    if (this != &rhs)
    {
        _isSigned = rhs._isSigned;
    }
    return *this;
}

const std::string &Form::getName() const
{
    return _name;
}

bool Form::getIsSigned() const
{
    return _isSigned;
}

int Form::getGradeToSign() const
{
    return _gradeToSign;
}

int Form::getGradeToExecute() const
{
    return _gradeToExecute;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= _gradeToSign)
    {
        _isSigned = true;
    }
    else
    {
        throw GradeTooLowException();
    }
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Form exception: Grade too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Form exception: Grade too low";
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
    os << form.getName() << ", form grade to sign: " << form.getGradeToSign()
       << ", grade to execute: " << form.getGradeToExecute()
       << (form.getIsSigned() ? ", is signed." : ", is not signed.");
    return os;
}
