/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:56:49 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/24 22:55:00 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"Intern.hpp"


int main() 
{
    try
    {
        Intern someRandomIntern;
        AForm* rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
        Bureaucrat bureaucrat("John Doe", 5);
        bureaucrat.signForm(*rrf);
        bureaucrat.executeForm(*rrf);
        delete rrf;
    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}

