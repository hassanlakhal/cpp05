/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 22:11:22 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/11/18 23:25:35 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"AForm.hpp"

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        virtual ~RobotomyRequestForm();
        void execute(Bureaucrat const & executor) const;
};


