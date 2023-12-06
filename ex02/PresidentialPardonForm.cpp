/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 22:11:10 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/06 09:46:07 by hlakhal-         ###   ########.fr       */
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
      this->setSing(other.getSig());
   return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
   if (!this->getSig() || executor.getGrade() > this->getGradeExecute())
      throw GradeTooLowException();
   std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox. " << std::endl;
}
