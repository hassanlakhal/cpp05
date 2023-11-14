/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 03:08:40 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/14 03:55:01 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<iostream>
#include"Bureaucrat.hpp"
class Form
{
private:
    const std::string name;
    bool sig;
    const int gradeSing;
    const int gradeExecute;
public:
    Form();
    Form(const std::string& name, const int& gradeSing, const int& gradeExecute);
    const std::string& getName() const;
    const int & getGradeSing() const;
    const int & getGradeExecute() const;
    void beSigned(const Bureaucrat& other);
    ~Form();
};


