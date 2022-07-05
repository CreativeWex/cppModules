#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->amount = 0; 
}

PhoneBook::~PhoneBook(){}

void PhoneBook::AddNewContact()
{
    std::string tmp;
    if (this->amount == 8)
    {
        std::cout << BLU "\nСправочник заполнен" RESET << std::endl;
        this->amount = 0;
    }
    std::cout << YEL "Добавление пользователя на страницу " RESET << this->amount << std::endl;
    this->_contacts[this->amount] = Contact();
    std::cout << "Имя: ";
    std::getline(std::cin, tmp);
    this->_contacts[this->amount].SetName(tmp);
    std::cout << "Фамилия: ";
    std::getline(std::cin, tmp);
    this->_contacts[this->amount].SetSurname(tmp);
    std::cout << "Псевдоним: ";
    std::getline(std::cin, tmp);
    this->_contacts[this->amount].SetNickname(tmp);
    std::cout << "Самый страшный секрет: ";
    std::getline(std::cin, tmp);
    this->_contacts[this->amount].SetDarkestSecret(tmp);
    this->_contacts[this->amount].SetFlagNotNuLL();

    this->amount++;


    std::cout << YEL "Контакт добавлен" RESET << std::endl;
}

void PhoneBook::DisplayHeader()
{
    std::cout << std::setw(10) << std::right << "|----------|----------|----------|----------|" << std::endl;
    std::cout << std::setw(10) << std::right << "|   Index  |   Name   |  Surname | Nickname |" << std::endl;
    std::cout << std::setw(10) << std::right << "|----------|----------|----------|----------|" << std::endl;
}

void PhoneBook::DisplayCurrentContacts()
{
    int i = 0;
    while(this->_contacts[i].GetFlagNotNull())
    {
        std::cout << "Запись присутствует по номеру " << i << std::endl;
        i++;
    }
}

Contact PhoneBook::GetContactsArray(int index)
{
    return _contacts[index];
}

void PhoneBook::SetContactsArray(int index, Contact valueContact)
{
    _contacts[index] = valueContact;
}