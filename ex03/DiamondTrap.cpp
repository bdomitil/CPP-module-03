#include "DiamondTrap.hpp"

DiamondTrap& DiamondTrap ::  operator=(DiamondTrap &second)
{
    this->_attack_damage = second._attack_damage;
    this->_energy_points = second._energy_points;
    this->_name = second._name;
    this->_hitpoints = second._hitpoints;
    return (*this);
}

DiamondTrap :: DiamondTrap() : ClapTrap()
{
    DiamondTrap :: _hitpoints = FragTrap:: _hitpoints;
    DiamondTrap :: _energy_points = ScavTrap:: _energy_points;
    DiamondTrap :: _attack_damage = FragTrap:: _attack_damage;
    std::cout << "DiamondTrap defautl constructor here " << std::endl;
}

DiamondTrap :: DiamondTrap(string name) : ClapTrap(name + "_clap_name"), _name(name)
{
    DiamondTrap :: _hitpoints = FragTrap:: _hitpoints;
    DiamondTrap :: _energy_points = ScavTrap:: _energy_points;
    DiamondTrap :: _attack_damage = FragTrap:: _attack_damage;
    std::cout << "DiamondTrap name constructor here " << std::endl;
}

DiamondTrap :: ~DiamondTrap()
{
    std::cout << "DiamondTrap destructor here " << std::endl;

}

void DiamondTrap :: whoAmI()
{
    std::cout << "DIamond name: " << _name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap :: _name << std::endl;

}

void DiamondTrap :: attack(const string &target)
{
    ScavTrap :: attack(target);
}

void DiamondTrap :: showStats(void)
{
    std::cout << "name :" << _name << std::endl;
    std::cout << "atack :" << _attack_damage << std::endl;
    std::cout << "energy :" << _energy_points << std::endl;
    std::cout << "hitpoints :" << _hitpoints << std::endl;
}

