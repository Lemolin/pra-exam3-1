#include <iostream>
#include "ApartmentBuilding.h"
using namespace std;

int main()
{
	Unit p1(0, 0, 0);


	



	ApartmentBuilding ApartmentBuilding(10);
	ApartmentBuilding.add_unit(p1);


	

	Unit* ApartmentBuildings = ApartmentBuilding.get_contents();
	for (int i = 0; i < ApartmentBuilding.get_current_number_of_units(); i++)

		cout << ApartmentBuildings[i].get_num_bedrooms() << " "<< ApartmentBuildings[i].get_value() << " "<< ApartmentBuildings[i].get_area() << endl;

	return 0;


	


}