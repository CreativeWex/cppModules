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
        /*===================[METHODS]===================*/
        void printToFormat(std::string s);
        bool validateField(std::string str);
        bool validateName(std::string str);
        bool validatePhoneNumber(std::string str);

};

//TODO: номер телефона
