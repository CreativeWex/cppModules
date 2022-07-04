#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->amount = 0; 
}

// PhoneBook::~PhoneBook()
// {
    
// }

void PhoneBook::AddNewContact()
{
    if (this->amount > 8)
    {
        std::cout << YEL "Справочник заполнен" RESET << std::endl;
        this->amount = 0;
    }
    std::cout << YEL "Добавление пользователя на страницу " RESET << this->amount << std::endl;
    this->_contacts[this->amount] = Contact();
    this->amount++;
    std::cout << YEL "Контакт добавлен" RESET << std::endl;
}



Contact PhoneBook::GetContactsArray(int index)
{
    return _contacts[index];
}

void PhoneBook::SetContactsArray(int index, Contact valueContact)
{
    _contacts[index] = valueContact;
}