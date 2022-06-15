#include <iostream>
using namespace std;


int main(void)
{

	// Working on heap and stack, watched memory allocation.

	/*int var1 = 10;
	int myArray[5];

	myArray[0] = 1;
	myArray[1] = 2;
	myArray[2] = 3;
	myArray[3] = 4;
	myArray[4] = 5;


	int* hvar = new int;
	*hvar = 7;

	int* harray = new int[5];

	harray[0] = 1;
	harray[1] = 2;
	harray[2] = 3;
	harray[3] = 4;
	harray[4] = 5;*/

	int* count, * arrayptr;
	count = new int;

	cout << "How many students? ";
	cin >> *count;

	arrayptr = new int[*count];

	for (int i = 0; i < *count; i++)
	{
		cout << "Enter score " << i+1 << ": ";
		cin >> arrayptr[i];
	}

	for (int i = 0; i < *count; i++)
	{
		cout << "Student " << i+1 << ": " << arrayptr[i] << endl;
	}

	delete count;
	delete[] arrayptr;










	return 0;
}