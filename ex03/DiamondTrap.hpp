#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap,  public FragTrap
{
private :
    string _name;
public:
    DiamondTrap();
    DiamondTrap(string name);
    ~DiamondTrap();
	DiamondTrap& operator=(DiamondTrap &second);
    void whoAmI();
    virtual void attack(const string& target);
    void showStats();
};