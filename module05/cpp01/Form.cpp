#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("Default"), _signed(false), _gradeSign(10), _gradeExec(10){};
Form::Form(Form const &src) : _name(src._signed), _signed(src._signed), _gradeSign(src._gradeSign), _gradeExec(src._gradeExec){};
Form::Form(){}; 
Form:: ~Form(){}; 

void Form::beSigned(const Bureaucrat &b){
    if(b.getGrade() && b.getGrade() > 50)
        std::cout << "assinado" << std::endl;
    else 
        std::cout << "nível baixo, não foi assinado" << std::endl;
}; 