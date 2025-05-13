#include "phonebook.hpp"
/*
** Quando vir um ':' em um construtor, o que ocorre é:
** Lista de inicialização de membros
*/

Phonebook::Phonebook() //Definição do construtor
:_index(0), _count(0) //Lista de inicialização -> index inicia com 0.
{
	return;	
}

Phonebook::~Phonebook()
{
	return;
}

Contact Phonebook::getContact(int index) const
{
	return this->_contacts[index];
}

int	Phonebook::getCount() const
{
	return this->_count;
}

void	Phonebook::setContact(Contact contact)
{
		this->_contacts[this->_index] = contact;
		if (_count < 8)
			_count++;
		this->_index = (this->_index + 1) % 8;
		
		return;
}
