#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(130){}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name), _grade(src._grade){}

Bureaucrat:: ~Bureaucrat(){};

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name){
    if (grade < 1)
    throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
    throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
}

void Bureaucrat::incrementGrade(){
    if (this-> _grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this-> _grade--;
}

void Bureaucrat::decrementGrade(){
    if (this-> _grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this-> _grade++;
}

std::string Bureaucrat::getName() const{
    return (this-> _name);
}

int Bureaucrat::getGrade() const{
    return(this-> _grade);
}

std::ostream &operator <<(std::ostream &o, Bureaucrat const &rhs){
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
    return o;
}