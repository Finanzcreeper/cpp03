#include "DiamondTrap.hpp"

DiamondTrap& DiamondTrap::operator=(DiamondTrap& src)
{
	if (this != &src)
		ClapTrap::operator=(src);
	std::cout << "New DiamondTrap " << this->getName() << " got replicated" << std::endl;
	return(*this);
}

DiamondTrap::DiamondTrap(DiamondTrap& src) : ClapTrap(src), FragTrap(src), ScavTrap(src)
{
	std::cout << "DiamondTrap " << src.Name << " installed" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name+"_clap_name"), FragTrap(name+"_clap_name"), ScavTrap(name+"_clap_name")
{
	this->Name = name;
	this->Hitpoints = FragTrap::Hitpoints;
	this->Energypoints = ScavTrap::Energypoints;
	this->Attackdamage = FragTrap::Attackdamage;
	std::cout << "DiamondTrap " << name << " installed" << std::endl;
}

void DiamondTrap::attack(std::string target)
{
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->Name << " got scrapped" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "ClapTrap name: " << ClapTrap::Name << " DiamondTrap name: " << this->Name << std::endl;
}

