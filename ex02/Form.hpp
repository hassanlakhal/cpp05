/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 03:08:40 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/15 04:44:04 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include<iostream>
#include"Bureaucrat.hpp"
class Bureaucrat;
class Form
{
private:
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
    ~Form();
};
#endif

