#include <iostream>
#include "Unit.h"
using namespace std;

Unit::Unit()
{
	unit_val = 0;
	num_beds = 0;
	unit_size = 0.0;

}


Unit::Unit(int val, int beds, double size)
{
	unit_val = val;
	num_beds = beds;
	unit_size = size;

}

int Unit::get_num_bedrooms()
{
	return num_beds;
}

int Unit::get_value() {
	return unit_val;
}

double Unit::get_area() {
	return unit_size;
}

Unit::~Unit()
{
}