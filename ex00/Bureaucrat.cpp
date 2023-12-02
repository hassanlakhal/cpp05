/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:57:00 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/02 13:30:06 by hlakhal-         ###   ########.fr       */
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

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name)
{
    this->grade = other.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
   if(this != &other)
        this->grade = other.grade;
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

Bureaucrat::~Bureaucrat() {}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}