//Pointers
#include <iostream>
using namespace std;


int main(void) {

	
	/*string myString = "Hello";
	cout << "Example string: " << myString <<endl;
	cout << "Adress of string: " << &myString << endl;

	string* ptr = &myString;
	cout << "Adress of pointer: " << ptr << endl;
	
	*ptr = "I am Hakan";
	cout << "Example string after changing it's value via pointer: " << *ptr << endl;*/

	double myDoubleArray[4] = { 3.4, 6.7, 7.5,9.7 };
	int myIntArray[4] = { 1,2,3,4 };
	float myFloatArray[4] = {1.1,2.2,3.3,4.4};

	cout << "Size of double: " << sizeof(double) << endl;
	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of float: " << sizeof(float) << endl;




	for (int i = 0; i < 4; i++) {

		cout << "myDouble" << "[" << i << "]: " << &myDoubleArray[i] << endl;
	}

	cout << "\n\n";

	for (int i = 0; i < 4; i++) {

		cout << "myInt" << "[" << i << "]: " << &myIntArray[i] << endl;
	}

	cout << "\n\n";

	for (int i = 0; i < 4; i++) {

		cout << "myFloat" << "[" << i << "]: " << &myFloatArray[i] << endl;
	}

	cout << "\n\n";

	
	

	









	return 0;
}

