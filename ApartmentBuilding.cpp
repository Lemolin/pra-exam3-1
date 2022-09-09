#include <iostream>
#include "ApartmentBuilding.h"
using namespace std;

ApartmentBuilding::ApartmentBuilding() {
	u_list = new Unit[capacity];
	capacity = 10;
	current_numer_of_units = 0;

}
ApartmentBuilding::ApartmentBuilding(int capa):capacity(capa),current_numer_of_units(0) {
	u_list = new Unit[capacity];

}
int ApartmentBuilding::get_capacity() {
	return capacity;
}
int ApartmentBuilding::get_current_number_of_units() {
	return current_numer_of_units;
}
Unit* ApartmentBuilding::get_contents() {
	return u_list;
}
bool ApartmentBuilding::add_unit(Unit unit) {
	if (current_numer_of_units > capacity) {
		return false;
	}
	else {
		u_list[current_numer_of_units] = unit;
		current_numer_of_units++;
		return true;
	}
}
ApartmentBuilding::~ApartmentBuilding()
{
}
