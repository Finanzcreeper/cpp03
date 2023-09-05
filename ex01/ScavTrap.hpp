#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	/* data */
public:

	ScavTrap(ScavTrap& src);
	ScavTrap(std::string name);
	~ScavTrap();

	void guardGate();

	ScavTrap& operator=(const ScavTrap& src);
};



#endif
