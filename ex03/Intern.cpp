/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 22:38:14 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/19 01:54:47 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Intern.hpp"

Intern::Intern()
{
    
}

Intern::~Intern()
{
    
}
const char* Intern::UndefineForm::what() const throw()
{
    return "can you check name of Form he should as {shrubbery creation,robotomy request,presidential pardon}";
}
int Intern::getIndxForm(const std::string& name)
{
    std::string nameForm[3] = {"shrubbery creation","robotomy request","presidential pardon"};
    for (int i = 0; i < 3; i++)
    {
       if (nameForm[i] == name)
            return i + 1; 
    }
    return 0;
}
Form* Intern::makeForm(const std::string& name, const std::string& target)
{
    Form *A;
    int a = getIndxForm(name);
    switch (a)
    {
        case 1:
            A = new ShrubberyCreationForm(target);
            break;
        case 2:
            A = new RobotomyRequestForm(target);
            break;
        case 3:
            A = new PresidentialPardonForm(target);
            break;
        default:
            throw UndefineForm();
            break;
    }  
    return A;
}