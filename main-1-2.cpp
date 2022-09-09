#include <iostream>
#include "ApartmentBuilding.h"
using namespace std;

int main()
{
	Unit p1(3000, 10, 5.5);

	ApartmentBuilding ApartmentBuilding(10);
	ApartmentBuilding.add_unit(p1);
	cout << ApartmentBuilding.get_current_number_of_units() << endl;

	


}