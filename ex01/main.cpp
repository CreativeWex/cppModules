#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    std::string input;
    PhoneBook listContacts;

    std::cout << YEL "Enter commant (ADD, SEARCH, EXIT) "RESET <<std::endl;
    while(1)
    {
        std::cout << YEL "_>" RESET;
        std::getline(std::cin, input);
        if (input == "ADD")
        {
            listContacts.addNewContact();
        }
        else if (input == "SEARCH")
        {
            listContacts.displayHeader();
            listContacts.displayCurrentContacts();
        }
        else if (input == "EXIT")
        {
            std::cout << YEL "Farewell! "RESET <<std::endl;
            return (0);
        }
    }
    return (0);
}