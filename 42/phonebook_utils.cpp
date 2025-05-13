#include "phonebook_utils.hpp"
#include "phonebook.hpp"
#include <iostream>

void	addContact(Phonebook *phonebook)
{
	std::string str;
	Contact contact;

	std::cout << "First name: ";	
	std::getline(std::cin, str);
	contact.setFirstName(str);
	
	std::cout << "Last name: ";
	std::getline(std::cin, str);
	contact.setLastName(str);

	std::cout << "Nickname: ";
	std::getline(std::cin, str);
	contact.setNickName(str);

	std::cout << "Phone number: ";
	std::getline(std::cin, str);
	contact.setPhoneNumber(str);

	std::cout << "Darkest secret: ";
	std::getline(std::cin, str);
	contact.setSecret(str);
	
	phonebook->setContact(contact);
}

void    searchContact(Phonebook *phonebook)
{
    int index;
    int count;

    count = phonebook-> getCount();
    std::cout << "Entrei na search contact: procura ai, chefe!!" << std::endl;

}
