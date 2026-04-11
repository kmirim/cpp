#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string> 
# include <exception>

class Bureaucrat{
    private:
        const std::string   _name;
        int                 _grade;

    public: 
        Bureaucrat(); //construtor padrao
        Bureaucrat(std::string const name, int grade); // construtor com parametro
        Bureaucrat(const Bureaucrat &other); // construtor de copia
        Bureaucrat &operator=(const Bureaucrat &rhs); // overload de operador
        ~Bureaucrat(); // destrutor  

        
        std::string getName() const; // const ao final indica que o metodo nao altera a classe
        int         getGrade() const;

        void incrementGrade();
        void decrementGrade();


        class GradeTooHighException : public std::exception{
            public:
                vitual const char *what() const throw() {
                    return ("Grade is too high!");
                }
        };

        class GradeTooLowException : public std::exception{
            public const char *what() const throw(){
                return ("Grade is too low!");
            }
        };
};

std::ostream &operator<<(std::ostream &o, Bureucrat const &rhs);

#endif 