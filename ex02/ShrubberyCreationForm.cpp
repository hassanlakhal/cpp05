/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 22:11:25 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/04 09:33:40 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("unknow",145,137)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm(target,145,137)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other):AForm(other)
{
   
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
   if (this != &other) 
      this->setSing(other.getSig());
   return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(!this->getSig() || (executor.getGrade() > this->getGradeExecute()))
        throw GradeTooLowException();
    std::ofstream file(this->getName() + "_shrubbery");
    if(!file.is_open())
      throw std::runtime_error("The file " + this->getName() + "_shrubbery has not been created !!");
   else
       std::cout << "creat file of the name: " <<"[ " << this->getName() << "_shrubbery ]" << std::endl;
    file << "   ccee88oo\n";
    file << "  C8O8O8Q8PoOb o8oo\n";
    file << " dOB69QO8PdUOpugoO9bD\n";
    file << "CgggbU8OU qOp qOdoUOdcb\n";
    file << "    6OuU  /p u gcoUodpP\n";
    file << "      \\\\\\//  /douUP\n";
    file << "        \\\\\\////\n";
    file << "         |||/\\\n";
    file << "         |||\\/ \n";
    file << "         |||||\n";
    file << "   .....//||||\\....\n";
   file.close();
}
