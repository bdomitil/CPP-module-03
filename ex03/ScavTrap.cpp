#include "ScavTrap.hpp"

ScavTrap& ScavTrap ::  operator=(ScavTrap &second)
{
	this->_attack_damage = second._attack_damage;
	this->_energy_points = second._energy_points;
	this->_name = second._name;
	this->_hitpoints = second._hitpoints;
	return (*this);
}

ScavTrap :: ScavTrap (ScavTrap &original)
{
	*this = original;
	std::cout << "copy constructor here" << std::endl;
}

ScavTrap :: ScavTrap ()  
{
	std::cout << "ScaVtrap defautl constructor here " << std::endl;
	this->_attack_damage = 20;
	this->_hitpoints = 100;
	this->_energy_points = 50;
}


ScavTrap :: ScavTrap (string name)
{
	std::cout << "ScaVtrap name constructor here " << std::endl;
	this->_attack_damage = 20;
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_name = name;
}

ScavTrap :: ~ScavTrap()
{
	std::cout << "ScaVtrap defautl destructor here " << std::endl;
}

void ScavTrap :: attack(const string &target)
{
	 std::cout << "ScavTrap " << _name << " attacks " << target << " ,causing  " <<  _attack_damage  << " point of damage" << std::endl;
}

void ScavTrap :: guardGate (void)
{
	std::cout << "ScavTrap have enterredin Gate keeper mode " << std::endl;
}

void ScavTrap :: showStats(void)
{
	std::cout << "name :" << _name << std::endl;
	std::cout << "atack :" << _attack_damage << std::endl;
	std::cout << "energy :" << _energy_points << std::endl;
	std::cout << "hitpoints :" << _hitpoints << std::endl;
}
