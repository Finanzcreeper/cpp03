#ifndef DiamondTrap_HPP
#define DiamondTrap_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : FragTrap, ScavTrap
{
private:
	std::string Name;
public:
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap& src);
	~DiamondTrap();

	void attack(std::string target);

	void whoAmI();

	DiamondTrap& operator=(DiamondTrap& src);

};


#endif
