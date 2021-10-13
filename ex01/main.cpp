#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap1("MaxClap");
    std::cout << "____________________" << std::endl;

    ClapTrap clap2("MarkClap");
    std::cout << "____________________" << std::endl;

    ScavTrap scav1("MaxScav");
    std::cout << "____________________" << std::endl;

    ScavTrap scav2("MarkScav");
    std::cout << "____________________" << std::endl;

    clap1.attack("MarkClap");
    std::cout << "____________________" << std::endl;

    clap2.takeDamage(20);
    std::cout << "____________________" << std::endl;

    clap1.beRepaired(10);
    std::cout << "____________________" << std::endl;

    scav1.showStats();
    std::cout << "____________________" << std::endl;

    scav1.attack("MarkClap");
    std::cout << "____________________" << std::endl;

    scav2.takeDamage(40);
    std::cout << "____________________" << std::endl;

    scav1.guardGate();
    std::cout << "____________________" << std::endl;


    return (0);
}