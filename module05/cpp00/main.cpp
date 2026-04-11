#include "Bureaucrat.hpp"

int main()
{
    try 
    {  
        std::cout << "--- Default case: ---" << std::endl;
        Bureaucrat b1("Kaluanã", 2);
        std::cout << b1 << std::endl;
        
        b1.incrementGrade();
        std::cout << "After increment: " << b1 << std::endl;
    }
    catch (std::exception &e) 
    {
        std::cerr << "Erro: " << e.what() << std::endl;
    }

    std::cout << std::endl;

    try 
    {
        std::cout << "--- Grade Too High ---" << std::endl;
        Bureaucrat b2("Chefe", 1);
        std::cout << b2 << std::endl;
        b2.incrementGrade();
    }
    catch (std::exception &e) 
    {
        std::cout << "Catch: " << e.what() << std::endl; // 
    }

    std::cout << std::endl;

    try 
    {
        std::cout << "--- Construtor Invalido (151) ---" << std::endl;
        Bureaucrat b3("Estagiario", 151);
    }
    catch (std::exception &e) 
    {
        std::cout << "Catch: " << e.what() << std::endl;
    }

    return 0;
}