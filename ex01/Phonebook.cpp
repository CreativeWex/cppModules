#include "PhoneBook.hpp"

Contact PhoneBook::GetContactsArray(int index)
{
    return _contacts[index];
}

void PhoneBook::SetContactsArray(int index, Contact valueContact)
{
    _contacts[index] = valueContact;
}