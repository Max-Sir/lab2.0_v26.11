#pragma once
#include <string>
#include "CommodityExpert.h"
class Wear
{
	size_t id;
	std::string name;
	double cost;
public:
	double get_cost() const;
	static size_t count;
	std::string get_name();

	void init_id();

	Wear();
	Wear(double cost, std::string name);
	friend class CommodityExpert;
	friend std::ostream& operator<<(std::ostream&, const Wear&);
	~ Wear();
};

size_t Wear::count = 1;