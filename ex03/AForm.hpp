/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 03:08:40 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/19 01:50:16 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include<iostream>
#include <fstream>
#include"Bureaucrat.hpp"
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
class Bureaucrat;
class Form
{
protected:
    const std::string name;
    bool sig;
    const int gradeSing;
    const int gradeExecute;
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
    Form();
    Form(const std::string& name, const int& gradeSing, const int& gradeExecute);
    const std::string& getName() const;
    Form& operator=(const Form& other);
    Form(const Form& other);
    const int & getGradeSing() const;
    const int & getGradeExecute() const;
    const bool & getSig()const;
    void beSigned(const Bureaucrat& other);
    virtual void execute(Bureaucrat const & executor) const = 0;
    virtual ~Form();
};
#endif

