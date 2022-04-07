#include <iostream>
using namespace std;

int main(void) {


	int myArray[3][6] = { {1,2,3,4,5,6}, {7,8,9,10,11,12}, {13,14,15,16,17,18} };
	int index = 0;
	
	cout << "Address of myArray: " << myArray << endl;
	cout << "Address of myArray: " << myArray[0] << endl;
	cout << "Address of M[0][0]: " << &myArray[0][0] << endl;

	/*int sum = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {

			cout << *(&myArray[0][0] + index) << "\t";
			index++;
		}
		cout << endl;
	}

	cout << "\n\n"; 

	index = 0;

	for (int i = 0; i < 3 * 6; i++) {

		sum += *(&myArray[0][0] + i);
	    index++;


	}
		cout << "Sum is: " << sum;

	*/

	cout << myArray[1][1] << " " << *(myArray + 7)<<endl; // Beklendiði gibi çalýþmýyor. Hoca link atacak.
	cout << myArray[1][1] << " " << *(myArray[0] + 7)<<endl;







	














	return 0;
}
