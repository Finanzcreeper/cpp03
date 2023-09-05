#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

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
