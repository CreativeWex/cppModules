#include "Contact.hpp"

// Contact::Contact() //TODO: валидация
// {
//     std::cout << "Имя: ";
//     std::getline(std::cin, _name);
//     std::cout << "Фамилия: ";
//     std::getline(std::cin, _surname);
//     std::cout << "Псевдоним: ";
//     std::getline(std::cin, _nickname);
//     std::cout << "Описание: ";
//     std::getline(std::cin, _darkestSecret);
// }

Contact::Contact()
{
    this->_flagNotNull = false;
}

Contact::~Contact(){}

void Contact::Display()
{
    std::cout << YEL "\nПоля объекта: " RESET << std::endl;
    std::cout << "Имя: " << _name << std::endl;
    std::cout << "Фамилия: " << _surname << std::endl;
    std::cout << "Псевдоним: " << _nickname << std::endl;
    std::cout << "Самый страшный секрет: " << _darkestSecret << std::endl;
}

std::string Contact::GetName()
{
    return _name;
}
std::string Contact::GetSurname()
{
    return _surname;
}
std::string Contact::GetNickname()
{
    return _nickname;
}
std::string Contact::GetDarkestSecret()
{
    return _darkestSecret;
}
bool Contact::GetFlagNotNull()
{
    return _flagNotNull;
}

void Contact::SetName(std::string valueName)
{
    _name = valueName;
}
void Contact::SetSurname(std::string valueSurname)
{
    _surname = valueSurname;
}
void Contact::SetNickname(std::string valueNickname)
{
    _nickname = valueNickname;
}
void Contact::SetDarkestSecret(std::string valueDarkestSecret)
{
    _darkestSecret = valueDarkestSecret;
}
void Contact::SetFlagNotNuLL()
{
    _flagNotNull = true;
}