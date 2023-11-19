/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:56:49 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/19 02:00:30 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"Intern.hpp"


int main() 
{
    try
    {
        Intern someRandomIntern;
        Form* rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
        Bureaucrat bureaucrat("John Doe", 50);
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

