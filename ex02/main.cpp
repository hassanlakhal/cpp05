/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:56:49 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/16 03:05:04 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat obj("GradeHigh", 140);
        Form *a = new ShrubberyCreationForm("test");
        a->beSigned(obj);
        a->execute(obj);
        // obj = obj1;
        // Form form("form",10,2);
        // Form form1("test",150,2);
        // Form *a = new Form("test",10,2);
        // a = &form;
        // std::cout << a->getName() << std::endl;
        // obj.signForm(form); 
      
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
