#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

# define RED	"\x1b[31m"
# define GRN	"\x1B[32m"
# define YEL	"\x1B[33m"
# define RESET  "\x1B[0m"

class ClapTrap
{
    public:
        ClapTrap();
        ~ClapTrap();
        // TODO: Конструктор копирования
        // TODO: Перегрузка оператора =

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string getName();        

    private:
       std::string _name;
       int _hitPoints; //TODO: 10
       int _energyPoints; //TODO: 10
       int _attackDamage; //TODO: 0


};

#endif