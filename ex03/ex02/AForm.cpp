/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 03:08:35 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/02 17:05:43 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Problem in Grade too High";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return"Problem in Grade too Low";
}

AForm::AForm():name(""),sig(false),gradeSing(0),gradeExecute(0)
{
    
}

AForm::AForm(const std::string& name, const int& gradeSing, const int& gradeExecute):name(name),\
sig(false),gradeSing(gradeSing),gradeExecute(gradeExecute)
{

}

AForm::AForm(const AForm& other):name(other.name),sig(other.sig)\
,gradeSing(other.gradeSing),gradeExecute(other.gradeExecute)
{
    std::cout << "copy construct " << std::endl;
}

AForm& AForm::operator=(const AForm& other)
{
    if (this == &other)
        return *this;
    this->sig = other.sig;
    return *this;
}

const int& AForm::getGradeSing() const
{
    return gradeSing;
}

const int& AForm::getGradeExecute() const
{
    return gradeExecute;
}

const std::string& AForm::getName() const
{
    return name;
}

const bool& AForm::getSig() const
{
    return sig;
}

void AForm::beSigned(const Bureaucrat& other)
{
    if(other.getGrade() <= gradeSing)
        sig = true;
    else
        throw GradeTooLowException();
}

void AForm::setSing(bool sing )
{
    sig = sing;
}

AForm::~AForm()
{
    // std::cout << "destructor" << std::endl;
}
std::ostream& operator<<(std::ostream& os, const AForm& Form)
{
    os << "Name of Form : "<< Form.getName() ; 
    os << "\tGrade Sing of Form: " << Form.getGradeSing();
    os << "\tGrade Execute of Form: " << Form.getGradeExecute() << std::endl;
    return os;
}