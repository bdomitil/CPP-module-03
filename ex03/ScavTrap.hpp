#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap 
{
public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(string name);
    
    void    guardGate();
    virtual void    attack(string const &target);
    ScavTrap(ScavTrap &copy);
	ScavTrap& operator=(ScavTrap &second);
    virtual void showStats();
};

#endif