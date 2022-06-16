#include <iostream>
#include <string>
using namespace std;

struct Obj
{	
	int en; // 4 bytes
	int boy; // 4 bytes
	char c; // 1 byte 

	// Total 12 bytes, because of alignment

};

// Complex structure definitions

struct Student
{
	string name;
	string surname;
	string department;
	string classChar;
	string lesson;


};

struct School
{
	string schoolName;
	string city;
	string province;
	string neighbour;

	struct Student student[5];
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

	// Array of structure

	Obj* myArray = new struct Obj[5];

	myArray[0].boy = 30;
	myArray[0].en = 50;

	myArray[1].boy = 60;
	myArray[1].en = 100;

	for (int i = 0; i < 2; i++)
	{
		cout << "Object " << i + 1 << ", Boy: " << myArray[i].boy << ", En: " << myArray[i].en << endl;
	}

	// Complex structure definitions

	struct School University;

	University.schoolName = "ESOGU";
	University.city = "Eskisehir";
	University.province = "Odunpazari";
	University.neighbour = "Buyukdere";

	University.student[0].name = "Hakan";
	University.student[0].surname = "Yavas";
	University.student[0].department = "CENG";
	University.student[0].lesson = "Computer Programming";
	University.student[0].classChar = "A";

	cout << "Student information: " << endl;
	cout << University.schoolName << "(" << University.city << ", " << University.province << ", " << University.neighbour << ")" << endl;
	cout << University.student[0].name << " " << University.student[0].surname << " " << University.student[0].department << " " << University.student[0].lesson << " " << University.student[0].classChar << endl;
















	return 0;
}