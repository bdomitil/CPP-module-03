#include "DiamondTrap.hpp"

int main()
{
    ClapTrap clap1("MaxClap");
    std::cout << "____________________" << std::endl;

    ClapTrap clap2("MarkClap");
    std::cout << "____________________" << std::endl;

    FragTrap frag1("MaxFrag");
    std::cout << "____________________" << std::endl;

    ScavTrap sc("MaxScav");
    std::cout << "____________________" << std::endl;

    FragTrap frag2("MarkFrag");
    std::cout << "____________________" << std::endl;

    DiamondTrap diamond1("MaxDiamond");
    std::cout << "____________________" << std::endl;

    DiamondTrap diamond2("MarkDiamond");
    std::cout << "____________________" << std::endl;

    sc.showStats();
    std::cout << "____________________" << std::endl;

    diamond2.showStats();
    std::cout << "____________________" << std::endl;

    frag1.showStats();
    std::cout << "____________________" << std::endl;

    clap1.attack("MarkClap");
    std::cout << "____________________" << std::endl;

    clap2.takeDamage(20);
    std::cout << "____________________" << std::endl;

    clap1.beRepaired(10);
    std::cout << "____________________" << std::endl;

    frag1.attack("MarkClap");
    std::cout << "____________________" << std::endl;

    frag2.takeDamage(40);
    std::cout << "____________________" << std::endl;

    frag1.highFiveGuys();
    std::cout << "____________________" << std::endl;

    diamond1.whoAmI();
    std::cout << "____________________" << std::endl;

    diamond2.takeDamage(2);
    std::cout << "____________________" << std::endl;

    diamond1.beRepaired(3);
    std::cout << "____________________" << std::endl;

    diamond2.attack("someone");
    std::cout << "____________________" << std::endl;

    diamond2.highFiveGuys();
    std::cout << "____________________" << std::endl;

    diamond1.guardGate();
    std::cout << "____________________" << std::endl;


    std::cout << "____________________" << std::endl;
    std::cout << "____________________" << std::endl;

    return (0);
}