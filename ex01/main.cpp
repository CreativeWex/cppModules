#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    int i = 0;
    std::string input;
    PhoneBook list = PhoneBook();

    while(1)
    {
        std::cout << YEL "_>" RESET;
        std::getline(std::cin, input);
        if (input == "ADD")
        {
            if (i > 8)
            {
                i = 0;
            }
            Contact person = Contact();
            
            i++;
        }
        if (input == "SEARCH")    // TODO: elseif
        {
            return (0);
        }
        if (input == "EXIT")     // TODO: elseif
        {
            return (0);
        }
        // else
        // {
        //     std::cout << RED "Wrong command" RESET << std::endl;
        // }
    }
    return (0);


}