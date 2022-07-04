#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "Header.hpp"

class Contact
{
    private:
        std::string _name,
                    _surname,
                    _nickname,
                    _darkestSecret;


    public:
        Contact();
        // ~Contact();

        void Display();

        std::string GetName();
        std::string GetSurname();
        std::string GetNickname();
        std::string GetDarkestSecret();

        void SetName(std::string valueName);
        void SetSurname(std::string valueSurname);
        void SetNickname(std::string valueNickname);
        void SetDarkestSecret(std::string valueDarkestSecret);


};

#endif