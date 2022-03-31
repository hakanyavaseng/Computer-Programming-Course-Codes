#include <iostream>
using namespace std;


int main() {

	int A[20] = {0,1,2,3,4,5,6,7,8,9};
	int* ptrA = &A[0];

	cout << "Address of A: " << &A << "\nAddress of ptrA: " << ptrA << endl;

	ptrA = ptrA + 1;

	cout << "\n\n";

	cout << "A[1] = " << A[1] << endl;
	cout << "Address of ptrA + 1: " << ptrA << "\nValue of ptrA + 1: " << *ptrA << endl;

	int* ptrB = &A[5];

	cout << "\n\n";

	cout << "ptrB = " << ptrB << "\nptrA = " << ptrA << endl;
	cout << "ptrB - ptrA = "<< ptrB - ptrA << endl; // Aradaki byte farkýný deðil, türe göre kaç birim geri gitmesi gerektiðini gösteriyor.

	cout << "\n\n";


	// Printing array using pointer

	ptrA = &A[0];

	for (ptrA = &A[0]; ptrA < &A[10]; ptrA++) {

		cout << *ptrA << "  ";


	}

	cout << "\n\n";


	if (&A[5] == A + 5) // Name of the an array is a pointer, so arithmetic operations can be done.
		cout << "True.";






       
















	return 0;
}
