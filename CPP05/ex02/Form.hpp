#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>


class Bureaucrat;

class Form
{
public:
    Form(const std::string &name, int gradeToSign, int gradeToExecute);
    Form(const Form &src);
    virtual ~Form();

    Form &operator=(const Form &rhs);

    const std::string &getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    virtual void execute(const Bureaucrat &executor) const = 0; 
    void beSigned(const Bureaucrat &bureaucrat);

    class GradeTooHighException : public std::exception
    {
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        const char *what() const throw();
    };

    class NotSignedException : public std::exception
    {
        const char *what() const throw();
    };

protected:
    const std::string _name;
    bool _isSigned;
    const int _gradeToSign;
    const int _gradeToExecute;
};

std::ostream & operator<<(std::ostream &os,const Form  &form);

#endif // FORM_HPP
