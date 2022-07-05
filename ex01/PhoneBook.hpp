#include "Contact.hpp"

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();
        /*===================[METHODS]===================*/
        void addNewContact();
        void displayHeader();
        void displayCurrentContacts();

        /*===================[GETTERS]===================*/
        Contact getContactsArray(int index);
        
        /*===================[SETTERS]===================*/
        void    setContactsArray(int index, Contact valueContact);
        
    private:
        int amount;
        Contact _contacts[8];
        
};