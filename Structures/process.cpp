#include "process.h"

void process(struct Signal l_current)
{
	double cumulative_sum = 0.0, mean_value = 0.0;
	for (int j = 0; j < BUFFER_SIZE; j++)
	{
		cumulative_sum += l_current.data[j];
	}
	mean_value = cumulative_sum / BUFFER_SIZE;
	cout << "The mean value is: " << mean_value << " Arbitrary Units" << endl;
}

//End of process()