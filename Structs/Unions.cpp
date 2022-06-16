#include <iostream>
using namespace std;


struct Shape
{
	int h;
	int x;
	int y;
	double r;

};

int main(void)
{
	Shape rp;
	rp.h = 10;
	rp.x = 5;
	rp.y = 2;
	rp.r = 100;


	cout << "Heigth: " << rp.h << ", X: " << rp.x << ", Y: " << rp.y << endl;
	cout << "Volume: " << rp.h * rp.x * rp.y << endl;
	cout << "Size of struct: " << sizeof(rp) << endl; // 24 basýyor

	Shape cyc;

	cyc.h = 8;
	cyc.r = 20; 
	
	cout << "Heigth: " << cyc.h << ", r: " << cyc.r << endl;
	cout << "Volume: " << cyc.h* (cyc.r*cyc.r) << endl;
	cout << "Size of struct: " << sizeof(rp) << endl;











	return 0;
}