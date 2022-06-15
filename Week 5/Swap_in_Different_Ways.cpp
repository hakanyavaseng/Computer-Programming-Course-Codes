#include <iostream>
using namespace std;
void swap1(int &first, int &second);
void swap2(int first, int second);
void swap3(int* first, int* second);

int main() {

	int x = 10;
	int y = 20;

	cout << "X before: " << x << "\nY before: " << y << endl;
	
	swap2(x, y); // With value.

	cout << "X after value: " << x << "\nY after value: " << y << endl;

	swap1(x, y);

	cout << "X after reference: " << x << "\nY after reference: " << y << endl;

	swap3(&x, &y);

	cout << "X after pointer: " << x << "\nY after pointer: " << y << endl;












	return 0;
}

void swap1(int &first, int &second) {

	int temp = first;
	first = second;
	second = temp;
}

void swap2(int first, int second) {

	int temp = first;
	first = second;
	second = temp;

}

void swap3(int* first, int* second) {

	int temp = *first;
	*first = *second;
	*second = temp;

}