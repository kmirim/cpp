#include "Phonebook.hpp"
#include "PhonebookUtils.hpp"
#include <iostream>

int main()
{
	Phonebook phonebook;

	std::cout << "Iniciando o teste...";
	std::cout << "Command info: " << std::endl;
	std::cout << " -ADD: add a contact to the phonebook" << std::endl;
	std::cout << " -SEARCH: search for a contact in the phonebook" << std::endl;
	std::cout << " -EXIT: quit the program" << std::endl;
	std::cout << " -DEBUGGER: Socorro!" << std::endl;

	while(42)
	{
		std::string command;
		std::cout << std::endl << "Enter a command: ";
		std::getline(std::cin, command);

		if(command == "ADD")
			addContact(&phonebook);
		else if(command == "SEARCH")
			searchContact(&phonebook);
		else if(command == "EXIT" || command == "")
			break;
	}
}
