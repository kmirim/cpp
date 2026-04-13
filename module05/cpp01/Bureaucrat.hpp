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
        Bureaucrat();
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat &operator=(const Bureaucrat &rhs);
        ~Bureaucrat(); 

        
        std::string getName() const;
        int         getGrade() const;

        void incrementGrade();
        void decrementGrade();

        class GradeTooHighException : public std::exception{
            public:
                virtual const char *what() const throw() {
                    return ("Grade is too high!");
                }
        };

        class GradeTooLowException : public std::exception{
            public:
                const char *what() const throw(){
                    return ("Grade is too low!");
                }
        };
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif 