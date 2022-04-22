#include <iostream>
#include "../headers/String.h"


using namespace std;

int main()
{
	char* c, * c2;
	c2 = "world";
	c = "hello";
	TString stroka1(10, 'c');
	TString stroka2(stroka1);
	cout << stroka2 << endl;

	TString stroka3("1234");
	TString stroka4("ABCDE");
	stroka3 = stroka3 + stroka2;
	cout << stroka3 << endl;
	stroka3 += "ABCDE";
	cout << stroka3 << endl;

	cout << stroka3.Find('E') << endl;
	cout << stroka3.Find(stroka4) << endl << (stroka3 < stroka4) << endl << (stroka3 > stroka4) << endl << (stroka3 == stroka4) << endl;
	cout << stroka3[14];
	return 0;
}