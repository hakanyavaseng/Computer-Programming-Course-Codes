#include <iostream>
using namespace std;

struct Obj
{	
	int en; // 4 bytes
	int boy; // 4 bytes
	char c; // 1 byte 

	// Total 12 bytes, because of alignment

};



int main(void)
{
	// Normal way
	Obj	myObject;

	myObject.boy = 10;
	myObject.en = 20;

	cout << "Boy: " << myObject.boy << ", En: " << myObject.en << endl;
	cout << "Size of struct: " << sizeof(myObject) << " bytes." << endl;

	//Pointer way
	Obj* myPtr = &myObject;

	myPtr->boy = 20;
	myPtr->en = 40;

	cout << "Using pointer: " << endl;
	cout << "Boy: " << myObject.boy << ", En: " << myObject.en << endl;
	cout << "Size of pointer: " << sizeof(myPtr) << " bytes." << endl;














	return 0;
}