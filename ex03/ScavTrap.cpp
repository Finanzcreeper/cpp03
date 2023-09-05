#include "ScavTrap.hpp"

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
	if(this != &src)
		ClapTrap::operator=(src);
	std::cout << " New ScavTrap" << this->getName() << " got replicated" << std::endl;
	return (*this);
}

ScavTrap::ScavTrap(ScavTrap& src) : ClapTrap(src)
{
	std::cout << "Scavtrap " << src.Name << " installed" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->setHp(100);
	this->setEp(50);
	this->setAd(20);
	std::cout << "Scavtrap " << name << " installed" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->getName() << " got scrapped" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->Name << " is now in gatekeeper mode" << std::endl;
}
