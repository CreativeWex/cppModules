#include "Contact.hpp"

class PhoneBook
{
    public:
    // TODO: перегрузить оператор равно
        PhoneBook();
        ~PhoneBook();

        void AddNewContact();
        void DisplayHeader();
        void DisplayCurrentContacts();

        // Геттеры
        Contact GetContactsArray(int index);
        // Сеттеры
        void    SetContactsArray(int index, Contact valueContact);
        
    private:
        int amount;
        Contact _contacts[8];
        
};