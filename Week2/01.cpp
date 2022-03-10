#include <iostream>
#include <time.h>
using namespace std;
#define SIZE 2
void initializeArray(int[], int);
void printArray(int[], int);
void updateZero(int[], int);
void reverseArray(int [], int size);
void initializeRandomArray(int [], int size);
void swap(int* xp, int* yp);
void bubbleSort(int [], int);

int main(void) {

	int myArray[10] = { 0 }; 

	initializeRandomArray(myArray, 10);
	printArray(myArray, 10);
	
	reverseArray(myArray, 10);
	printArray(myArray, 10);

	bubbleSort(myArray, 10);
	printArray(myArray, 10);

	


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
void initializeRandomArray(int array[], int size) {

	srand(time(NULL));

	for (int i = 0; i < size; i++) {

		array[i] = 100 + rand() %1000;
	}

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
void reverseArray(int array[], int size) {
	
	int temp;
	int j = size - 1;
	for (int i = 0; i < j; i++, j--)
	{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
	}

	cout << "-------------ARRAY REVERSED!-------------\n\n";
}
void swap(int* xp, int* yp)
{
	//Using pointer for bubble sort alghoritm.
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void bubbleSort(int array[], int size)
{
	//Bubble sort alghoritm which is developed lately.
	int i, j;
	for (i = 0; i < size - 1; i++)
		for (j = 0; j < size - i - 1; j++)
			if (array[j] > array[j + 1])
				swap(&array[j], &array[j + 1]);

	cout << "-------------ARRAY SORTED!-------------\n\n";

}