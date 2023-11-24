/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 22:11:10 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/24 22:36:58 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm(target,25,5)
{
    
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other):AForm(other)
{
   
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
   if (this != &other)
      this->sig = other.sig;
   return *this;
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
