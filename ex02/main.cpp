/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:56:49 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/16 23:57:43 by hlakhal-         ###   ########.fr       */
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
        Bureaucrat bureaucrat("John Doe", 3);
        Form *a[3] = {
                        new ShrubberyCreationForm("home"),
                        new RobotomyRequestForm("office"),
                        new PresidentialPardonForm("friend")
                     };
        for (int i = 0; i < 3; i++)
        {
            a[i]->beSigned(bureaucrat);
        }
        a[0]->execute(bureaucrat);
        a[1]->execute(bureaucrat);
        a[2]->execute(bureaucrat);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
