#include "FragTrap.hpp"

FragTrap& FragTrap::operator=(const FragTrap& src)
{
	if (this != &src)
		ClapTrap::operator=(src);
	std::cout << " New FragTrap" << this->getName() << " got replicated" << std::endl;
	return (*this);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	setHp(100);
	setEp(100);
	setAd(30);
	std::cout << "Fragtrap " << name << " installed" << std::endl;
}

FragTrap::FragTrap(FragTrap& src) : ClapTrap(src)
{
	std::cout << "Fragtrap " << src.Name << " installed" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->getName() << " got scrapped" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "HighFive!" << std::endl;
}
