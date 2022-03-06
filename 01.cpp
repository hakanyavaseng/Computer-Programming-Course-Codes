#include <iostream>
#include <iomanip>

using namespace std; 

void printArray(int[], int);
void printMemoryAdresses(int[], int);
double calculateAverage(int[], int);


int main(void) {

	int myArray[10]={1,2,3,4,5,6,7,8,9,10};
	int input;

	cout << "Enter number: ";
	cin >> input;
	cout << "Your input is: " << input;











	cout << "\n\n\n";
	system("pause");
	return 0;
}

void printArray(int array[], int size) {

	for (int i = 0; i < size; i++) {

		cout << "Element " << i << " of the array is " << array[i] << endl;

	}
	cout << "\n\n\n";

}

double calculateAverage(int array[], int size) {

	int sum = 0;
	double average;

	for (int i = 0; i < size; i++) {


		sum += array[i];
	}

	average = (double)sum / size;
	cout << "The average of the array members is " << average;
	cout << "\n\n\n";

	return average;
}

void printMemoryAdresses(int array[], int size) {

	for (int i = 0; i < size; i++) {

		cout << "Memory Adress of element " << i << " is " << &array[i] << endl;

	}

	cout << "\n\n\n";
}

