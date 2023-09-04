#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	trap("rapp");
	ClapTrap	late("noname");
	ClapTrap	jake(late);
	late = trap;
	trap.attack("Door");
	trap.attack("Door");
	trap.attack("Door");
	trap.attack("Door");
	trap.attack("Door");
	trap.attack("Door");
	trap.attack("Door");
	trap.attack("Door");
	trap.attack("Door");
	trap.takeDamage(10);
	trap.beRepaired(1);
	trap.attack("Door");
	return (0);
}
