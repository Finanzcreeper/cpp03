#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap	trap("rapp");
	ClapTrap	late("noname");
	ScavTrap	GaGu("Guard");
	ScavTrap	wen(GaGu);

	late = trap;
	std::cout << late.getName() << " has " << late.getEp() << " Energypoints" << std::endl;
	late.attack("tree");
	std::cout << late.getName() << " has " << late.getEp() << " Energypoints" << std::endl;
	std::cout << GaGu.getName() << " has " << GaGu.getEp() << " Energypoints" << std::endl;
	GaGu.attack("the same tree");
	std::cout << GaGu.getName() << " has " << GaGu.getEp() << " Energypoints" << std::endl;

	return (0);
}
