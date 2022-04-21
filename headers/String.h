#pragma once
#include <iostream>
class TString
{
protected:
	int len;
	char* str;

public:
	TString();
	TString(char* str);
	TString(int n, char c = 0);
	TString(const TString& p);
	~TString();
	int GetLen();

	TString operator+(const TString& p);
	TString& operator=(const TString& p);
	TString& operator+=(const TString& p);

	//TString operator+ (char* s);
	//TString operator= (char* s);
	//TString operator+= (char* s);

	//bool operator==(TString& p);
	//bool operator>(TString& p);
	//bool operator<(TString& p);
	//bool operator!=(TString& p);

	//char& operator[](int i);

	//int Find(char c);
	//int Find(TString& p);
	//TString* split(char c);

	void Print();
};