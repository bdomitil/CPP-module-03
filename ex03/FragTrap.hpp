#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap 
{
public:
    FragTrap();
    ~FragTrap();
    FragTrap(string name);
    FragTrap(int);
    FragTrap(string name, int);
    void highFiveGuys(void);
    void    attack(string const &target);
    FragTrap(FragTrap &copy);
	FragTrap& operator=(FragTrap &second);
    virtual void showStats();
};

#endif