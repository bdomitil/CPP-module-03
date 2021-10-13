#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(string name);
    void    guardGate();
    virtual void    attack(string const &target);
    ScavTrap(ScavTrap &copy);
	ScavTrap& operator=(ScavTrap &second);
    void showStats();
};

#endif