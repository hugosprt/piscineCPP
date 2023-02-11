
#include <iostream>


class Weapon{

	private:

	std::string _type;
	std::string _name;

	public:

	Weapon(std::string name);
	~Weapon(void);

	std::string const & Weapon::getType() const;
	void Weapon::setType(std::string type);
};