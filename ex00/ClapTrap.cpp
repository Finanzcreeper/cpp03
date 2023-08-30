#include "ClapTrap.hpp"


ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	std::cout << "New claptrap is being replicated" << std::endl;
	this->Attackdamage = src.Attackdamage;
	this->Energypoints = src.Energypoints;
	this->Hitpoints = src.Hitpoints;
	this->Name = src.Name;
	return (*this);
}

ClapTrap::ClapTrap(ClapTrap& src)
{
	std::cout << "New claptrap is being replicated" << std::endl;
	this->Attackdamage = src.Attackdamage;
	this->Energypoints = src.Energypoints;
	this->Hitpoints = src.Hitpoints;
	this->Name = src.Name;
}

ClapTrap::ClapTrap(std::string givenName) : Name(givenName), Hitpoints(10), Energypoints(10), Attackdamage(0)
{
	std::cout << "New claptrap is being built" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap " << this->Name << " got turned to scrap!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->Hitpoints <= 0)
	{
		std::cout << "ClapTrap " <<this->Name << " has no HP and is downed!!" << std::endl;
		return ;
	}
	if (this->Energypoints <= 0)
	{
		std::cout << "ClapTrap " <<this->Name << " is out of energy!!" << std::endl;
		return ;
	}
	this->Energypoints--;
	std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->Attackdamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->Hitpoints -= amount;
	std::cout << "OUCH! ClapTrap " << this->Name << " has taken " << amount << " damage." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Hitpoints <= 0)
	{
		std::cout << "ClapTrap " <<this->Name << " has no HP and is downed!!" << std::endl;
		return ;
	}
	if ( this->Energypoints <= 0)
	{
		std::cout << "ClapTrap " <<this->Name << " is out of energy!!" << std::endl;
		return ;
	}
	this->Hitpoints += amount;
	this->Energypoints--;
	std::cout << "ClapTrap " << this->Name << " got repaired and gained " << amount << " Hitpoints back" << std::endl;
}
