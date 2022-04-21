#include <iostream>
#include "../headers/String.h"


using namespace std;

int main()
{
	char* c, * c2;
	c2 = "world";
	c = "hello";
	TString stroka;
	stroka = "hello";
	TString strrr;
	strrr += stroka;
	strrr.Print();
	return 0;
}