#ifndef ApartmentBuilding_H
#define ApartmentBuilding_H
#include <string>
#include "Unit.h"
using namespace std;

class ApartmentBuilding
{
public:
	Unit* u_list;
	int capacity;
	int current_numer_of_units;

	ApartmentBuilding();
	ApartmentBuilding(int capacity);
	int get_capacity();
	int get_current_number_of_units();
	Unit* get_contents();
	bool add_unit(Unit unit);
	~ApartmentBuilding();
};
#endif 