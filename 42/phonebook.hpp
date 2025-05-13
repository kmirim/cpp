#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "contact.hpp"
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
		{ // Método temporário para verificação
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
	/*
	** _index (private) com intuito de: 
	** Membros interos do funcionamento da classe não devem ser acessíveis.
	** Só a própria classe deverá gerenciar qual index esta sendo usado.
	** Ex: Se qualquer parte do código pudesse modificar o _index, poderia corromper a
	agenda.
	*/

		int		_count; 
		Contact	_contacts[8];
		int		_index;
};

#endif
