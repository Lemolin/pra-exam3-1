#ifndef Unit_H
#define Unit_H
#include <string>
using namespace std;

class Unit
{
public:
	int unit_val;
	int num_beds;
	double unit_size;

	Unit();
	Unit(int unit_val,int num_beds,double unit_size);
	int get_num_bedrooms();
	int get_value();
	double get_area();
	~Unit();
};
#endif 