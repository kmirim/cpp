#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <iostream>

class Phonebook
{
	public:

		Phonebook();
		~Phonebook();
	
		Contact	getContact(int index) const;
		int		getCount() const;
		
		void	setContact(Contact contact);
		
		void printDebug() const 
		{
        	for (int i = 0; i < _count; i++) 
			{
				std::cout << "Contato #" << i << ":\n"
				<< "Nome: " << _contacts[i].getFirstName() << "\n"
				<< "Sobrenome: " << _contacts[i].getLastName() << "\n"
				<< "Apelido: " << _contacts[i].getNickName() << "\n"
				<< "Telefone: " << _contacts[i].getPhoneNumber() << "\n"
				<< "Segredo: " << _contacts[i].getSecret() << "\n"
				<< "-----------------\n";
			}
		}
	
	private:
		int		_count; 
		Contact	_contacts[8];
		int		_index;
};

#endif
