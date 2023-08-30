#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap
{
private:
	std::string	Name;
	int			Hitpoints;
	int			Energypoints;
	int			Attackdamage;
public:
	ClapTrap(ClapTrap& src);
	ClapTrap(std::string Name);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap& operator=(const ClapTrap& src);
};

#endif
