#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
	/* data */
public:
	FragTrap(std::string name);
	FragTrap(FragTrap& src);
	~FragTrap();

	void highFivesGuys(void);

	FragTrap& operator=(const FragTrap& src);
};

#endif
