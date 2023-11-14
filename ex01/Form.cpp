/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 03:08:35 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/14 06:50:04 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Form.hpp"

Form::Form()
{
    
}

Form::Form(const std::string& name, const int& gradeSing, const int& gradeExecute)
{
    this->name = name;
    this->gradeSing = gradeSing;
    this->gradeExecute = gradeExecute;
    this->sig =  false;
}

Form::~Form()
{
}