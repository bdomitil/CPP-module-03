#include "FragTrap.hpp"

FragTrap& FragTrap ::  operator=(FragTrap &second)
{
    this->_attack_damage = second._attack_damage;
    this->_energy_points = second._energy_points;
    this->_name = second._name;
    this->_hitpoints = second._hitpoints;
    return (*this);
}

FragTrap :: FragTrap (FragTrap &original)
{
    *this = original;
    std::cout << "copy constructor here" << std::endl;
}

FragTrap :: FragTrap ()  
{
    std::cout << "FragTrap defautl constructor here " << std::endl;
    this->_attack_damage = 30;
    this->_hitpoints = 100;
    this->_energy_points = 100;
}

FragTrap :: FragTrap (string name)
{
    std::cout << "FragTrap name constructor here " << std::endl;
    this->_attack_damage = 30;
    this->_hitpoints = 100;
    this->_energy_points = 100;
    this->_name = name;
}

FragTrap :: ~FragTrap()
{
    std::cout << "FragTrap defautl destructor here " << std::endl;
}

void FragTrap :: attack(const string &target)
{
     std::cout << "FragTrap " << _name << " attacks " << target << " ,causing  " <<  _attack_damage  << " point of damage" << std::endl;
}

void FragTrap :: highFiveGuys(void)
{
    std::cout << "request or five high" << std::endl;
}


void FragTrap :: showStats(void)
{
    std::cout << "name :" << _name << std::endl;
    std::cout << "atack :" << _attack_damage << std::endl;
    std::cout << "energy :" << _energy_points << std::endl;
    std::cout << "hitpoints :" << _hitpoints << std::endl;
}