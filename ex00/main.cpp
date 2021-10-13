#include "ClapTrap.hpp"

int main()
{
    ClapTrap obj1("Mark");
    ClapTrap obj2("Max");

    obj1.attack("obj2");
    obj2.takeDamage(20);
    obj2.beRepaired(10);
    return (1);
}