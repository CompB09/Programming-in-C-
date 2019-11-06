#include<iostream>
using namespace std;

#ifndef _ SIGNAL
#define _ SIGNAL
#define BUFFER_SIZE 8
struct Signal
{
	float fc; // Carrier Frequency
	float fs; // Sampling Frequency
	int delta_f; // Change of Carrier? 1 for yes, 0 for no
	int ns; // Number of Samples in Buffer
	double data[BUFFER_SIZE]; //The data, which could be complex
};
#endif // !_ SIGNAL
