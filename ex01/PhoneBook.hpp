#include "Contact.hpp"

class PhoneBook
{
    public:
        Contact GetContactsArray(int index);
        void    SetContactsArray(int index, Contact valueContact);
        
    private:
        Contact _contacts[8];
        
};