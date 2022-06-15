#include<iostream>
#include<string>

using namespace std;

int main(void)
{

	char str1[] = "This is my first string";

	// Stringi print etmek!

	//puts(str1); // Otomatik olarak boþluk ekler.
	//printf("%s\n", str1); // Alta geçmesi için new line gerekiyor
	//cout << str1 << endl; // new line atmak gerekiyor

	// Printf ile string formatlama 
	
	/*printf("%40s\n", str1); 
	printf("%-40s bosluk sonrasi gelen yazi\n", str1);
	printf("%40.10s\n", str1);*/

	// String input.

	char str2[50];
	cout << "Please enter a string up to 49 characters: ";
	
	// gets(str2); Dangerous to use and removed from C++.
    
	cin >> str2; // Boþluklarý almýyor.
	printf("%s\n", str2);

	cin.clear();
	cin.ignore();

	char str3[50];


	cout << "Please enter a string up to 49 characters: ";
	cin.getline(str3, 49);
	printf("%s\n", str3);





















	return 0;
}