#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name){
    if (grade < 1)
        throw Bureaucrat::GradeTooLowException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
    this->_grade = grade;

}
void Bureaucrat::incrementGrade(){
    if (this-> _grade - 1 < 1)
        throw Bureaucrat::GradeTooLowException();
    this-> _grade--;
}

void Bureaucrat::decrementGrade(){
    else if (this-> _grade + 1 > 150)
        throw Bureaucrat::GradeTooHighException();
    this-> _grade++;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs){
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
    return o;
}