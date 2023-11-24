/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 22:11:17 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/24 22:38:36 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RobotomyRequestForm.hpp"
#include <cstdlib>  
#include <ctime> 
RobotomyRequestForm::RobotomyRequestForm()
{
    
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm(target,72,45)
{
    
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if(!sig || (executor.getGrade() > gradeExecute))
    {
        throw GradeTooHighException();
    }
    std::srand(static_cast<unsigned>(std::time(0)));
    bool randNumber = (std::rand() % 50 + 1) % 2 == 0;
    if (randNumber)
        std::cout << executor.getName() << " has been robotomized "  << std::endl;
    else
        std::cout << executor.getName() << " has not been robotomized "<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other):AForm(other)
{
   
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
   if (this != &other)
      this->sig = other.sig;
   return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}