#include "Contact.hpp"

Contact::Contact()
{
    this->_flagNotNull = false;
}

Contact::~Contact()
{

}

/*===================[METHODS]===================*/
void Contact::display()
{
    std::cout << YEL "\nПоля объекта: " RESET << std::endl;
    std::cout << "Имя: " << _name << std::endl;
    std::cout << "Фамилия: " << _surname << std::endl;
    std::cout << "Псевдоним: " << _nickname << std::endl;
    std::cout << "Самый страшный секрет: " << _darkestSecret << std::endl;
}

/*===================[GETTERS]===================*/
std::string Contact::getName()
{
    return _name;
}

std::string Contact::getSurname()
{
    return _surname;
}

std::string Contact::getNickname()
{
    return _nickname;
}

std::string Contact::getDarkestSecret()
{
    return _darkestSecret;
}

bool Contact::getFlagNotNull()
{
    return _flagNotNull;
}

/*===================[SETTERS]===================*/
void Contact::setName(std::string valueName)
{
    _name = valueName;
}

void Contact::setSurname(std::string valueSurname)
{
    _surname = valueSurname;
}

void Contact::setNickname(std::string valueNickname)
{
    _nickname = valueNickname;
}

void Contact::setDarkestSecret(std::string valueDarkestSecret)
{
    _darkestSecret = valueDarkestSecret;
}

void Contact::setFlagNotNuLL()
{
    _flagNotNull = true;
}