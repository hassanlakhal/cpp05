/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 22:11:10 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/16 01:30:28 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    
}

PresidentialPardonForm::PresidentialPardonForm(std::string& target):Form(target,72,45)
{
    
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
   (void)executor;
}