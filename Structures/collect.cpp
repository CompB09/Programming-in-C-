#include "collect.h"

struct Signal collect(struct Signal l_current)
{
	struct Signal assigned;
	l_current.fc = 8000.0;
	l_current.fs = 16000.0;
	l_current.ns = 8;
	
	double new_data[BUFFER_SIZE] = { 1.1,1.2,1.1,1.05,1.07,1.2,1.2,1.31 };
	for (int i = 0; i < BUFFER_SIZE; i++)
	{
		l_current.data[i] = new_data[i];
	}
	assigned = l_current;

	//Checking for the amount of memory being used in this local function
	cout << "The amount of memory used here in collect() is: " << sizeof(l_current) << " bytes" << endl;
	return assigned;
}
//End of collect()