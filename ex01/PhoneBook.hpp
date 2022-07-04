#include "Contact.hpp"

class PhoneBook
{
    public:
        PhoneBook();
        // ~PhoneBook();

        void AddNewContact();

        Contact GetContactsArray(int index);
        void    SetContactsArray(int index, Contact valueContact);
        
    private:
        int amount;
        Contact _contacts[8];
        
};