/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 03:08:35 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/02 10:18:30 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"

const char *Form::GradeTooHighException::what() const throw()
{
    return "Problem in Grade too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return"Problem in Grade too Low";
}

Form::Form():name(""),sig(false),gradeSing(0),gradeExecute(0)
{
    
}

Form::Form(const std::string& name, const int& gradeSing, const int& gradeExecute):name(name),\
sig(false),gradeSing(gradeSing),gradeExecute(gradeExecute)
{

}

Form::Form(const Form& other):name(other.name),sig(other.sig)\
,gradeSing(other.gradeSing),gradeExecute(other.gradeExecute)
{
    std::cout << "copy construct " << std::endl;
}

Form& Form::operator=(const Form& other)
{
    if (this == &other)
        return *this;
    this->sig = other.sig;
    return *this;
}

const int& Form::getGradeSing() const
{
    return gradeSing;
}

const int& Form::getGradeExecute() const
{
    return gradeExecute;
}

const std::string& Form::getName() const
{
    return name;
}

const bool& Form::getSig() const
{
    return sig;
}

void Form::beSigned(const Bureaucrat& other)
{
    if(other.getGrade() <= gradeSing)
        sig = true;
    else
        throw GradeTooLowException();
}

Form::~Form()
{
    // std::cout << "destructor" << std::endl;
}
std::ostream& operator<<(std::ostream& os, const Form& Form)
{
    os << "Name of Form : "<< Form.getName() ; 
    os << "\tGrade Sing of Form: " << Form.getGradeSing();
    os << "\tGrade Execute of Form: " << Form.getGradeExecute() << std::endl;
    return os;
}