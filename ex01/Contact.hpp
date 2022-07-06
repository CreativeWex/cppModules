#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "Header.hpp"

class Contact
{
    private:
        std::string _name;
        std::string _surname;
        std::string _nickname;
        std::string _darkestSecret; //TODO: добавить поля
        bool _flagNotNull;

    public:
        Contact();
        ~Contact();
        /*===================[METHODS]===================*/
        void display(int index);

        /*===================[GETTERS]===================*/
        std::string getName();
        std::string getSurname();
        std::string getNickname();
        std::string getDarkestSecret();
        bool getFlagNotNull();

        /*===================[SETTERS]===================*/
        void setName(std::string valueName);
        void setSurname(std::string valueSurname);
        void setNickname(std::string valueNickname);
        void setDarkestSecret(std::string valueDarkestSecret);
        void setFlagNotNuLL();
};

#endif