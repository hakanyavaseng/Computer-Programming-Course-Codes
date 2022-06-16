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
	Obj	myObject;

	myObject.boy = 10;
	myObject.en = 20;

	cout << "Boy: " << myObject.boy << ", En: " << myObject.en << endl;
	cout << "Size of struct: " << sizeof(myObject) << " bytes." << endl;

















	return 0;
}