#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <cstring>

class ClapTrap
{
protected:
	std::string	Name;
	int			Hitpoints;
	int			Energypoints;
	int			Attackdamage;
public:
	ClapTrap(ClapTrap& src);
	ClapTrap(std::string Name);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void setName(std::string name);
	void setHp(int Hp);
	void setEp(int Ep);
	void setAd(int Ad);

	std::string getName(void);
	int getHp(void);
	int getEp(void);
	int getAp(void);


	ClapTrap& operator=(const ClapTrap& src);
};

#endif
