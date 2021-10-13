#include "ClapTrap.hpp"

ClapTrap& ClapTrap ::  operator=(ClapTrap &second)
{
    this->_attack_damage = second._attack_damage;
    this->_energy_points = second._energy_points;
    this->_name = second._name;
    this->_hitpoints = second._hitpoints;
    return (*this);
}

ClapTrap :: ClapTrap (ClapTrap &original)
{
    *this = original;
    std::cout << "copy constructor here" << std::endl;
}

ClapTrap :: ClapTrap (void): _hitpoints(10), _energy_points(10), _attack_damage(0)
{

    std::cout << "default constructor here" << std::endl;
}

ClapTrap :: ~ClapTrap (void)
{
    std::cout << "destructor here" << std::endl;

}

ClapTrap :: ClapTrap (string name) : _hitpoints(10), _energy_points(10), _attack_damage(0), _name(name)
{
    std::cout << "name constructor here" << std::endl;
}

void ClapTrap :: attack (const string &target)
{
    std::cout << "ClapTrap " << _name << " attacks " << target << " ,causing  " <<  _attack_damage  << " point of damage" << std::endl;
}

void ClapTrap :: takeDamage (unsigned int amount)
{
    std::cout << "ClapTrap " << _name << " takes damage for " << amount << " points "  << std::endl;
}

void ClapTrap :: beRepaired (unsigned int amount)
{
    std::cout << "ClapTrap " << _name << " been repaired for " << amount << " points" << std::endl;
}