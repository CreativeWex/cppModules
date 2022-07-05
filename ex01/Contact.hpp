#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "Header.hpp"

class Contact
{
    private:
        std::string _name,
                    _surname,
                    _nickname,
                    _darkestSecret,
                    _favoriteMeal;
        bool _flagNotNull;


    public:
        Contact();
        ~Contact();

        void Display();

        // геттеры
        std::string GetName();
        std::string GetSurname();
        std::string GetNickname();
        std::string GetDarkestSecret();
        bool GetFlagNotNull();

        // сеттеры
        void SetName(std::string valueName);
        void SetSurname(std::string valueSurname);
        void SetNickname(std::string valueNickname);
        void SetDarkestSecret(std::string valueDarkestSecret);
        void SetFlagNotNuLL();
};

#endif