#include <string>
#include <iostream>

int main() {
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "String address: " << &string << std::endl;
    std::cout << "Address stored in stringPTR pointer: " << stringPTR << std::endl;
    std::cout << "Address of stringREF reference: " << &stringREF << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "String value: " << string << std::endl;
    std::cout << "Value of pointer dereference: " << *stringPTR << std::endl;
    std::cout << "Value through stringREF reference: " << stringREF << std::endl;
}