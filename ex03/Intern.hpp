/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 22:38:20 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/19 01:46:59 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"PresidentialPardonForm.hpp"

class Intern
{
private:
    /* data */
public:
    Intern();
    Form* makeForm(const std::string& name, const std::string& target);
    int getIndxForm(const std::string& name);
    class UndefineForm : public std::exception
    {
        virtual const char* what() const throw();
    };
    ~Intern();
};

