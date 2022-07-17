#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Base contructor called\n";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    _isDead = false;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Contructor called for " YEL << name << RESET "\n";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    _isDead = false;
    _name = name;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called for " YEL << _name << RESET "\n";
}

/*===================[METHODS]===================*/

void ClapTrap::attack(const std::string& target, unsigned int amount)
{
    if (_isDead)
    {
        std::cout << "ClapTrap " YEL << _name << RESET " is dead\n";
    }
    else
    {
        int tmp = _energyPoints - amount;
        if (_energyPoints <= 0 || tmp < 0)
        {
            std::cout << "Not enought energy for ClapTrap " << _name << RESET " to " 
                << RED "attack" RESET << "\n";
            return ;
        }
        else
        {
            std::cout << "ClapTrap " YEL <<  _name << RED " attacks " YEL
                <<  target << RESET ", causing " RED<< amount << RESET " points of damage!\n";
            _energyPoints -= amount;
        }
    }
}

void ClapTrap::displayInfo()
{
    std::cout << "ClapTrap " YEL << _name << RESET " hit points: " << _hitPoints
        << ", energy points: " << _energyPoints << "\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_isDead)
    {
        std::cout << "ClapTrap " YEL << _name << RESET " is dead\n";
    }
    else if (_hitPoints == 10)
    {
        std::cout << "ClapTrap " YEL << _name << GRN " is not repairing, he is full hp\n" RESET;
    }
    else
    {
        int tmp = _energyPoints - amount;
        if (_energyPoints <= 0 || tmp < 0)
        {
            std::cout << "Not enought energy for ClapTrap " YEL << _name << " to " 
                << GRN "repairing" RESET << "\n";
            return ;
        }
        std::cout << "ClapTrap " YEL << _name << GRN " is repairing" RESET
            << " by " GRN << amount << RESET " points\n";
        int tmp2 = _hitPoints + amount;
        if (tmp2 > 10)
        {
            _hitPoints = 10;
        }
        else
        {
            _hitPoints += amount;
        }
        _energyPoints -= amount;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " YEL << _name << CYN " took " RESET
            << CYN << amount << RESET " damage\n";
    int tmp = _hitPoints - amount;
    if (tmp < 0)
    {
        _hitPoints = 0;
    }
    else
    {
        _hitPoints -= amount;
    }
    if (_hitPoints <= 0)
    {
        _isDead = true;
    }
}

/*===================[GETTERS]===================*/
