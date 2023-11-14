#include <iostream>
#include <stdexcept>

class Bureaucrat {
private:
    const std::string name;
    int grade;

public:
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw() {
            return "Grade is too high";
        }
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw() {
            return "Grade is too low";
        }
    };

    Bureaucrat(const std::string& name, int grade) : name(name) {
        if (grade < 1) {
            throw GradeTooHighException();
        } else if (grade > 150) {
            throw GradeTooLowException();
        }
        else
            this->grade = grade;
    }

    const std::string& getName() const {
        return name;
    }

    int getGrade() const {
        return grade;
    }

    void incrementGrade() {
        if (grade > 1) {
            grade--;
        } else {
            throw GradeTooHighException();
        }
    }

    void decrementGrade() {
        if (grade < 150) {
            grade++;
        } else {
            throw GradeTooLowException();
        }
    }
};

// Overload << operator for easy printing
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}

int main() {
    try {
        Bureaucrat highGradeBureaucrat("HighGrade", 5);
        std::cout << highGradeBureaucrat << std::endl;

        Bureaucrat lowGradeBureaucrat("LowGrade", 150);
        std::cout << lowGradeBureaucrat << std::endl;

        highGradeBureaucrat.incrementGrade();
        std::cout << highGradeBureaucrat << std::endl;

        lowGradeBureaucrat.decrementGrade();
        std::cout << lowGradeBureaucrat << std::endl;

        // This should throw an exception
        Bureaucrat invalidGradeBureaucrat("InvalidGrade", 0);
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
