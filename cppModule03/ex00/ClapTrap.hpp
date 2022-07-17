#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

# define RED	"\x1b[31m"
# define GRN	"\x1B[32m"
# define YEL	"\x1B[33m"
# define CYN	"\x1B[36m"
# define RESET  "\x1B[0m"

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        // TODO: Конструктор копирования
        // TODO: Перегрузка оператора =

/*===================[METHODS]===================*/
        void attack(const std::string& target, unsigned int amount);
        void beRepaired(unsigned int amount);
        void takeDamage(unsigned int amount);
        void displayInfo();        

    private:
       std::string _name;
       int _hitPoints; 
       int _energyPoints;
       int _attackDamage;
       bool _isDead;
};

#endif