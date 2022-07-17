#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Contructor called\n";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called\n";
}

std::string ClapTrap::getName()
{
    return _name;
}

// void ClapTrap::attack(const std::string& target)
// {
//     std::cout << "ClapTrap" <<  _name << RED "attacks" RESET
//     <<  ", causing <damage> points of damage!\n";
// }

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints == 10)
    {
        std::cout << "ClapTrap " << _name<< GRN "is full\n" RESET;
    }
    else // TODO: разобраться с энергией
    {
        if (_energyPoints <= 0 || _energyPoints - amount <= 0)
        {
            std::cout << "Not enought energy";
            return ;
        }
        _hitPoints += amount;
        _energyPoints -= amount;
        std::cout << "ClapTrap " << _name << GRN " is repairing" RESET
            << " by " GRN << amount << RESET " points\n";
    }
}