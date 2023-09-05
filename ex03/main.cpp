#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap	trap("rapp");
	ClapTrap	late("noname");
	ScavTrap	GaGu("Guard");
	ScavTrap	wen(GaGu);
	FragTrap	Fragger("nade");
	FragTrap	cpycat(Fragger);
	DiamondTrap	dia("richy");
	DiamondTrap	emerald(dia);
	DiamondTrap	a("nah");

	a = dia;
	late = trap;
	a.whoAmI();
	std::cout << late.getName() << " has " << late.getEp() << " Energypoints" << std::endl;
	late.attack("tree");
	std::cout << late.getName() << " has " << late.getEp() << " Energypoints" << std::endl;
	std::cout << GaGu.getName() << " has " << GaGu.getEp() << " Energypoints" << std::endl;
	GaGu.attack("the same tree");
	std::cout << GaGu.getName() << " has " << GaGu.getEp() << " Energypoints" << std::endl;
	cpycat.highFivesGuys();

	return (0);
}
