#include "commonheader.h"
#include "collect.h"
#include "process.h"

int main()
{
	//Instance of struct Signal, but akso of data members
	struct Signal current = { 0.0,0.0,0,0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};

	cout << "Initialising the collecting structure in main()" << endl;
	cout << "The carrier frequency is initialised at: " << current.fc << "Hz" << endl;
	cout << "The sampling frequency is initialised at: " << current.fs << "Hz" << endl;
	cout << "Start of collection - no change in frequency: " << current.delta_f << endl;
	cout << "The number of samples to collect is set at: " << current.ns << " samples" << endl;
	for (int i = 0; i < BUFFER_SIZE; i++)
	{
		cout << "Data element " << i << " in the signal is currently: " << current.data[i] << " Arbitrary Units" << endl;
	}
	
	//End of initialisation

	//Checking for the amount of memory being used in main()
	cout << "The amount of memory used for this structure in main() is: " << sizeof(current) << " bytes" << endl;

	//Updating the collecting structure with a function call
	struct Signal updated;
	updated = collect(current);

	//Now, we'll use the updated structure to find some statistical information about it
	process(updated);

	return 0;

}

//End of main


