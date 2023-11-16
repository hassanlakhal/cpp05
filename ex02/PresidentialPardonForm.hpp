/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 22:11:13 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/16 01:29:19 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"
class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string& target);
    ~PresidentialPardonForm();
    void execute(Bureaucrat const & executor) const;
};


