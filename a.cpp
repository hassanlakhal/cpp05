/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 12:27:40 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/12/03 15:13:20 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>

// class Resource {
// public:
//   Resource() {
//     std::cout << "Resource created" << std::endl;
//   }

//   ~Resource() {
//     std::cout << "Resource destroyed" << std::endl;
//   }
// };

// void function1() {
//   // Create a resource on the stack
//   Resource resource;
  
//   // Throw an exception
//   throw std::exception();
// }

// int main() {
//   try {
//     function1(); // Trigger stack unwinding
//   } catch (std::exception& e) {
//     // Handle the exception
//     std::cout << "Exception caught: " << e.what() << std::endl;
//   }
//   return 0;
// }


#include <iostream>

class MyException : public std::exception {
public:
  MyException(const std::string& message) : message(message) {}

  const std::string& getMessage() const { return message; }
  ~MyException()  { /* Can potentially throw exceptions */ }

private:
  std::string message;
};

void function1() {
  // Throw an exception
  throw MyException("An exception occurred in function1");
}

void function2() {
  try {
    function1(); // Propagate the exception from function1
  } catch (MyException& e) {
    // Handle the exception
    std::cout << "Exception caught in function2: " << e.getMessage() << std::endl;
  }
}

int main() {
  try {
    function2(); // Propagate the exception from function2
  } catch (MyException& e) {
    // Handle the exception
    std::cout << "Exception caught in main: " << e.getMessage() << std::endl;
  }
  return 0;
}
