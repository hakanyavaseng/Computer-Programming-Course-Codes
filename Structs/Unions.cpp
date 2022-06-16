#include <iostream>
using namespace std;


struct Shape
{
	int h;

	union {
		struct 
		{
			int x;
			int y;

		};
		struct 
		{
			double r;
		};
	};
	

};

union testu
{
	int one;
	int two;
	char ch;
};


int main(void)
{
	//Complex array definitions


	Shape rp;
	rp.h = 10;
	rp.x = 5;
	rp.y = 2;


	cout << "Heigth: " << rp.h << ", X: " << rp.x << ", Y: " << rp.y << endl;
	cout << "Volume: " << rp.h * rp.x * rp.y << endl;
	cout << "Size of struct: " << sizeof(rp) << endl; // 24 basýyor

	


	// Union en büyük üyenin boyutuna göre yer ayýrýr, hangi üye çaðrýlýrsa 
	// ona göre deðerlendirme yapýyor. Hoca dedi :D

	testu myu;

	myu.one = 65;
	
	cout << "myu.one: " << myu.one << endl;
	cout << "myu.two: " << myu.two << endl;
	cout << "myu.ch: " << myu.ch << endl;

	cout << "&myu.one: " << &myu.one << endl;
	cout << "&myu.two: " << &myu.two << endl;
	printf("&myu.ch = %p\n", &myu.ch);











	return 0;
}