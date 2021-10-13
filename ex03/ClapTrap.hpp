#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

typedef std::string string;

class ClapTrap
{
protected:
	int     _hitpoints;
	int     _energy_points;
	int     _attack_damage;
	string  _name;
public:
	void	attack(string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amout);
	ClapTrap(string name);
	ClapTrap(void);
	~ClapTrap(void);
	ClapTrap(ClapTrap &copy);
	ClapTrap& operator=(ClapTrap &second);

};

#endif