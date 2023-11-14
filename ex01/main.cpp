/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 21:56:49 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/14 23:52:07 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat obj("GradeHigh", 149);
        Form form("form",150,2);
        obj.signForm(form);
        // obj.decrement();
        // std::cout << obj << std::endl;
        
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}

