#include <iostream>
using namespace std;

int main(void) {


	int myArray[3][6] = { {10,20,30,40,50,60}, {70,80,90,100,110,120} , {130,140,150,160,170,180} };
	int index = 0;
	
	cout << "Address of myArray: " << myArray << endl;
	cout << "Address of myArray: " << myArray[0] << endl;
	cout << "Address of M[0][0]: " << &myArray[0][0] << endl;


	/*for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {

			cout << *(&myArray[0][0] + index) << " ";
			index++;
		}
		cout << endl;
	}*/












	return 0;
}
