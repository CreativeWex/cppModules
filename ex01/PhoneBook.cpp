#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->amount = 0; 
}

PhoneBook::~PhoneBook()
{

}

/*===================[METHODS]===================*/
void PhoneBook::addNewContact()
{
    std::string tmp;
    if (this->amount == 8)
    {
        std::cout << BLU "\nPhoneBook IS FULL" RESET << std::endl;
        this->amount = 0;
    }
    std::cout << YEL "Creating new contact on page " RESET << this->amount << std::endl;
    this->_contacts[this->amount] = Contact();
    std::cout << "Name: ";
    std::getline(std::cin, tmp);
    this->_contacts[this->amount].setName(tmp);
    std::cout << "Surname: ";
    std::getline(std::cin, tmp);
    this->_contacts[this->amount].setSurname(tmp);
    std::cout << "Nickname: ";
    std::getline(std::cin, tmp);
    this->_contacts[this->amount].setNickname(tmp);
    std::cout << "The darkest secret: ";
    std::getline(std::cin, tmp);
    this->_contacts[this->amount].setDarkestSecret(tmp);
    this->_contacts[this->amount].setFlagNotNuLL();
    this->amount++;
    std::cout << YEL "Contact added" RESET << std::endl;
    std::cout << YEL "Enter commant (ADD, SEARCH, EXIT) "RESET <<std::endl;

}

void PhoneBook::displayHeader()
{
    std::cout << std::setw(10) << std::right << "|----------|----------|----------|----------|\n";
    std::cout << std::setw(10) << std::right << "|  Index   |   Name   |  Surname | Nickname |\n";
    std::cout << std::setw(10) << std::right << "|----------|----------|----------|----------|\n";
}

void PhoneBook::printToFormat(std::string s)
{
    if (s.size() > 10)
    {
        s = s.insert(9, ".");
        s = s.substr(0, 10);
    }
    else
        while (s.length() < 10)
            s = s.insert(0, " ");
    std::cout << "|" << std::setw(10) << std::right << s;
}

void PhoneBook::displayCurrentContacts()
{
    int i = 0;
    std::string tmp;

    while(this->_contacts[i].getFlagNotNull() && i < 8)
    {
        std::cout << "|" << std::setw(10) << std::left << i;
        this->printToFormat(this->_contacts[i].getName());
        this->printToFormat(this->_contacts[i].getSurname());
        this->printToFormat(this->_contacts[i].getNickname());
        std::cout << "|\n";
        i++;
    }
    std::cout << "Enter " YEL "index " RESET "to display more information or type" YEL " [BACK] " RESET "to cancel\n";
    while (1)
    {
        std::cout << BLU "_>" RESET;
        std::getline(std::cin, tmp);
        if (tmp == "BACK")
        {
            std::cout << YEL "Enter command (ADD, SEARCH, EXIT) "RESET <<std::endl;
            break;
        }
        else
        {
            try
            {
                if (tmp.size() > 1)
                {
                    throw(tmp);
                }
                int res = std::stoi(tmp);
                if (res > 7 || !(this->_contacts[res].getFlagNotNull()) || (isdigit(res)))
                {
                    throw (tmp);
                }
                this->_contacts[res].display(res);
            }
            catch(std::string str)
            {
                std::cerr << YEL "Wrong arg: " RESET << str << "\n";
            }
        }
    }
}

/*===================[GETTERS]===================*/
Contact PhoneBook::getContactsArray(int index)
{
    return _contacts[index];
}

/*===================[SETTERS]===================*/
void PhoneBook::setContactsArray(int index, Contact valueContact)
{
    _contacts[index] = valueContact;
}