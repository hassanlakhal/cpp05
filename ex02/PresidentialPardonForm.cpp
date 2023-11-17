/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 22:11:10 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/17 01:29:19 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form(target,25,5)
{
    
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
   if (!sig || executor.getGrade() >= gradeExecute)
      throw GradeTooHighException();
   std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox. " << std::endl;
}
