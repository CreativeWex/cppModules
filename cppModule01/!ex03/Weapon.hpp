#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
# define YEL	"\x1B[33m"
# define RESET  "\x1B[0m"

class Weapon
{
    public:
        Weapon(std::string type);
        ~Weapon();

        std::string getType() const;
        void setType(std::string typeValue);

    private:
        std::string _type;
};

#endif