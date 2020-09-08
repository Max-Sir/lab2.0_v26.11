#include "Wear.h"

#include <ostream>
#include <utility>

double Wear::get_cost() const
{
	return this->cost;
}

std::string Wear::get_name()
{
	return this->name;
}

void Wear::init_id()
{
	this->id = Wear::count++;
}

Wear::Wear()
{
	init_id();
}

Wear::~Wear()
{
}

Wear::Wear(double cost=100, std::string name=""):
	cost(cost), name(std::move(name))
{
	init_id();
}

std::ostream& operator<<(std::ostream& out, const Wear& wear)
{
	out << "id: " << wear.id << "\ncost: " << wear.cost << "\nname: " << wear.name<<std::endl;
	return out;
}
