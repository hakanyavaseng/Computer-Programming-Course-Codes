//Multidimensional Arrays Examples
#include <iostream>
using namespace std;



int main(void) {

	int myArray[3][3] = {0};


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Please enter elements: ";
			cin >> myArray[i][j];

		}
	}


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << myArray[i][j];

		}

		cout << endl;
	}


	return 0;
}