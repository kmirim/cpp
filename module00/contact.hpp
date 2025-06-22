#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact
{
	public:
		Contact(); //construtor
		~Contact(); //destrutor
		
		/* 
		** Getters:
		** Atribuicao de valores:
		*/

		std::string	getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNumber() const;
		std::string	getSecret() const;
		
		/*
		** Setters:
		** Resgate/acesso de valores:
		*/

		void	setFirstName(std::string);
		void	setLastName(std::string);
		void	setNickName(std::string);
		void	setPhoneNumber(std::string);
		void	setSecret(std::string);
		
	private:
		std::string _firstName;
		std::string _lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_secret;
};

#endif
