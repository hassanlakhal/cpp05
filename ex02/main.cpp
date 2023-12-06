/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:56:49 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/06 10:07:26 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat burt("Jack_Td", 45);
        ShrubberyCreationForm shrubberyForm("home");
        RobotomyRequestForm robotomyForm("office");
        PresidentialPardonForm pardonForm("friend");

        burt.signForm(shrubberyForm);
        burt.signForm(robotomyForm);
        burt.signForm(pardonForm);

        burt.executeForm(shrubberyForm);
        burt.executeForm(robotomyForm);
        burt.executeForm(pardonForm);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}
