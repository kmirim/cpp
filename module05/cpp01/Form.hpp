#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>

//forward declaration parecido com aviso previo, é como declarar o prototipo da funcao no topo do arquivo para poder usar sem se preocupar com a ordem

class Bureaucrat;

class Form{
    private:
        const std::string   _name;
        bool                _signed; // começa como false Form::toSigned : _signed(false)
        const int           _gradeSign;
        const int           _gradeExec;

    public:
        Form();
        Form(const std::string name, bool _signed, const int _gradeSign, const int _gradeExec);
        Form(const Form &other);
        Form &operator=(const Form &rhs);
        ~Form();

        void beSigned(const Bureaucrat &b); // const pq 'b' não pode ser modificado por esse método

        class GradeTooLowException : public std::exception{
            public: 
                virtual const char *what() const throw(){
                    return("Form: Grade is too high");
                }
        };
        class GradeHighExceptio : public std::exception{
            public: 
                virtual const char *what() const throw(){
                    return("Form: Grade is too low");
            }
        };
};

std::ostream &operator<<(std::ostream &o, Form const &rhs);


#endif