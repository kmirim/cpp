#include "Phonebook.hpp"

Phonebook::Phonebook()
:_index(0), _count(0)
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
