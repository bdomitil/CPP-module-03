#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"


class FragTrap : public ClapTrap 
{
public:
    FragTrap();
    ~FragTrap();
    FragTrap(string name);
    void highFiveGuys(void);
    virtual void    attack(string const &target);
    FragTrap(FragTrap &copy);
	FragTrap& operator=(FragTrap &second);
    void showStats();
};

#endif