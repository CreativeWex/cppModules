#include "HumanA.hpp"
#include <string.h>

HumanA::~HumanA()
{

}

void HumanA::attack() const
{
    std::cout << _name << " attacks with their " << _type.getType() << "\n";
}



// TODO: не работает
HumanA::HumanA(std::string name, Weapon &type)
{
    _name = name;
    _type = type;
}