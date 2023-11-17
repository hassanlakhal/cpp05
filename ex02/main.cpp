/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:56:49 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/17 01:36:01 by hlakhal-         ###   ########.fr       */
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
        // Bureaucrat bureaucrat("John Doe", 3);
        // Form *a[3] = {
        //                 new ShrubberyCreationForm("home"),
        //                 new RobotomyRequestForm("office"),
        //                 new PresidentialPardonForm("friend")
        //              };
        // for (int i = 0; i < 3; i++)
        // {
        //     a[i]->beSigned(bureaucrat);
        // }
        // a[0]->execute(bureaucrat);
        // a[1]->execute(bureaucrat);
        // a[2]->execute(bureaucrat);
        Bureaucrat bureaucrat("Jack_Td", 5);
        ShrubberyCreationForm shrubberyForm("home");
        RobotomyRequestForm robotomyForm("office");
        PresidentialPardonForm pardonForm("friend");

        bureaucrat.signForm(shrubberyForm);
        bureaucrat.signForm(robotomyForm);
        bureaucrat.signForm(pardonForm);

        bureaucrat.executeForm(shrubberyForm);
        bureaucrat.executeForm(robotomyForm);
        bureaucrat.executeForm(pardonForm);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
