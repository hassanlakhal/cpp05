/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:56:55 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/14 23:37:26 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include<iostream>
#include"Form.hpp"
class Form;
class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
    Bureaucrat();
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    Bureaucrat(const std::string& name, int grade);
    const std::string& getName() const;
    const int & getGrade() const;
    void increment();
    void decrement();
    void signForm(Form& other);
    ~Bureaucrat();
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif

