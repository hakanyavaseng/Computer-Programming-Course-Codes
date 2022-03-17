//Multidimensional Arrays Examples
#include <iostream>
using namespace std;
#define SIZE 3


int main(void) {

	int myArray[SIZE][SIZE] = {0};


	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << "Please enter elements " << "a" << i << j << ": ";
			cin >> myArray[i][j];

		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << myArray[i][j] << "\t";

		}

		cout << endl;
	}


	return 0;
}