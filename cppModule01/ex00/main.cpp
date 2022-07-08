#include "Zombie.hpp"

Zombie *newZombie(std::string);
void randomChump(std::string name);

int main()
{
    Zombie *biba = new Zombie("Biba");
    biba->announce();
    randomChump("Boba"); // Боба удалился из-за выхода из области видимости
    delete biba;
    
    std::cout<<"\n";

    Zombie *pupa = new Zombie("Pupa");
    pupa->announce();
    Zombie *lupa = new Zombie("Lupa");
    lupa->announce();
    delete pupa;
    pupa->announce();
    delete lupa;
    lupa->announce();

    std::cout<<"\n";

    randomChump("Soso");

    return 0;
}
//TODO: спросить про обращение к методам через удаленный объект