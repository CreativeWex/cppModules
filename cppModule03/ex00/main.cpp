#include "ClapTrap.hpp"

int main()
{
    ClapTrap first = ClapTrap("first");
    first.displayInfo();
    std::cout << "\n";

    first.attack("Zombie", 3);
    first.displayInfo();
    std::cout << "\n";

    first.beRepaired(10);
    first.displayInfo();
    std::cout << "\n";

    first.attack("Skeleton", 12);
    first.displayInfo();
    first.attack("Skeleton", 4);
    first.displayInfo();
    std::cout << "\n";

    first.takeDamage(1);
    first.displayInfo();
    first.beRepaired(10);
    first.displayInfo();
    first.beRepaired(2);
    first.displayInfo();
    std::cout << "\n";

    first.takeDamage(4);
    first.displayInfo();
    first.beRepaired(1);
    first.displayInfo();
    first.beRepaired(1);
    first.displayInfo();
    first.beRepaired(1);
    first.displayInfo();
    first.attack("Skeleton", 12);
    std::cout << "\n";

    first.takeDamage(125);
    first.displayInfo();
    first.attack("Bat", 1);
    first.beRepaired(1);
    std::cout << "\n";

    ClapTrap second = ClapTrap("second");
    second.takeDamage(125);
    second.displayInfo();
    second.attack("Bat", 1);
    second.beRepaired(1);
    std::cout << "\n";
    
    return 0;
}