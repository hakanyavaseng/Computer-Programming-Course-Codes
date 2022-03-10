#include <iostream>
using namespace std;
#define SIZE 5
void initializeArray(int[], int);
void printArray(int[], int);
void updateZero(int[], int);

int main(void) {


	int myArray[SIZE] = { 0 };

	initializeArray(myArray, 5);
	printArray(myArray, 5);
	updateZero(myArray, 5);
	printArray(myArray, 5);








	cout << "\n\n\n";
	system("pause");
	return 0;
}

void initializeArray(int array[], int size) {


	for (int i = 0; i < size; i++) {
		cout << "Please enter variable " << i+1 << ": ";
		cin >> array[i];
	}
	cout << "\n\n";
}

void printArray(int array[], int size) {

	for (int i = 0; i < size; i++) {

		cout << "Element in index " << i << " is " << array[i]<<endl;
	}
	cout << "\n\n";

}

void updateZero(int array[], int size) {

	for (int i = 0; i < size; i++) {
		array[i] = 0;
	}
	string message = "-----------All values are updated to 0.-----------\n\n";
	cout << message;

}