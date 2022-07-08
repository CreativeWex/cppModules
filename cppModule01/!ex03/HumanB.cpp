#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    _name = name;
}

HumanB::~HumanB()
{

}

void HumanB::attack() const
{
    std::cout << _name << " attacks with their " << _type << "\n";
}