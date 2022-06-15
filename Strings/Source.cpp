#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(void)
{

	//char str1[] = "This is my first string";

	// Stringi print etmek!

	//puts(str1); // Otomatik olarak boþluk ekler.
	//printf("%s\n", str1); // Alta geçmesi için new line gerekiyor
	//cout << str1 << endl; // new line atmak gerekiyor

	// Printf ile string formatlama 

	/*printf("%40s\n", str1);
	printf("%-40s bosluk sonrasi gelen yazi\n", str1);
	printf("%40.10s\n", str1);*/

	// String input.

	//char str2[50];
	//cout << "Please enter a string up to 49 characters: ";
	//
	//// gets(str2); Dangerous to use and removed from C++.
 //   
	//cin.getline(str2, 49);
	//printf("%s\n", str2);

	//char str3[50];


	//cout << "Please enter a string up to 49 characters: ";
	//cin.getline(str3, 10);
	//printf("%s\n", str3);

	// String functions.


	//strcat
	char str1[50] = "Hello";
	char str2[50] = " World!";

	cout << "String 1: " << str1 << "\nString 2: " << str2 << endl;

	strcat_s(str1, str2);


	cout << "String 1 after strcat: " << str1 << endl;


	// strcpy

	char str3[50];

	strcpy_s(str3, str1);

	cout << "String 3 (copied from str1): " << str3 << endl;

	// strcmp

	char alpha[10] = "ABCD"; // ASCII for uppercase letter is between 65-90
	char alpha2[10] = "abcd"; // ASCII for lowercase letter is between 97-122

	cout << "String comparison: " << strcmp(alpha, alpha2) << endl; 























	return 0;
}