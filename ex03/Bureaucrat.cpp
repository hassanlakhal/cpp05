/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:57:00 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/06 10:12:10 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Problem in Grade too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Problem in Grade too Low";
}

Bureaucrat::Bureaucrat() : name("Unknown name"), grade(0) {}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
    (std::string)this->name = other.name;
    this->grade = other.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
   if(this != &other)
   {
        (std::string)this->name = other.name;
        this->grade = other.grade;
   }
   return *this;
}

const std::string& Bureaucrat::getName() const
{
    return name;
}

const int& Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::increment()
{
    if (grade == 1)
        throw GradeTooHighException();
    else
        this->grade--;
}

void Bureaucrat::decrement()
{
    if (grade == 150)
        throw GradeTooLowException();
    else
        this->grade++;
}

void Bureaucrat::signForm(AForm& other)
{
    try
    {
        (other).beSigned(*this);
        std::cout << name << " signed " << other.getName() << std::endl;
    }
    catch(const AForm::GradeTooLowException& e)
    {
       std::cout << this->getName() << " couldn’t sign " << other.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout << GREEN <<this->name << " executed " << form.getName() <<RESET<< std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << RED << "The bureaucrat "<< this->name << " has not been executed " << form.getName() << RESET << std::endl;
    }
}

Bureaucrat::~Bureaucrat() {}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}