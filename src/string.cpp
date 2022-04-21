#include <String.h>
#include <cstring>
#include "..\headers\String.h"

TString::TString()
{
	str = nullptr;
}

TString::TString(char* str)
{
	int length = strlen(str);
	this->str = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		this->str[i] = str[i];
	}
	this->str[length] = '\0';
}

TString::TString(int n, char c)
{
	return;
}

TString::TString(const TString& p)
{
	int length = strlen(p.str);
	this->str = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		this->str[i] = p.str[i];
	}
	this->str[length] = '\0';
}

TString::~TString()
{
	delete[] this->str;
}

TString& TString::operator=(const TString& p)
{
	if (this->str != nullptr) delete[] str;
	int length = strlen(p.str);
	this->str = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		this->str[i] = p.str[i];
	}
	this->str[length] = '\0';
	return *this;
}

void TString::Print()
{
	std::cout << str;
}

int TString::GetLen()
{
	return len;
}
//
//char* TString::GetString()
//{
//	return nullptr;
//}
//
TString TString::operator+(const TString& p)
{
	TString newstr;
	int thisLength = strlen(this->str);
	int pLength = strlen(p.str);
	newstr.str = new char[thisLength + pLength + 1];
	int i = 0;
	for (; i < thisLength; i++)
		newstr.str[i] = this->str[i];

	for (int j = 0; j < pLength; j++, i++)
		newstr.str[i] = p.str[j];

	newstr.str[thisLength + pLength] = '\0';
	newstr.len = strlen(newstr.str);

	return newstr;
}
//
//TString& TString::operator=(const TString& p)
//{
//	return;
//}
//
TString& TString::operator+=(const TString& p)
{
	int thisLength = strlen(this->str);
	int pLength = strlen(p.str);
	int i = 0;
	for (; i < thisLength; i++)
		this->str[i] = this->str[i];

	for (int j = 0; j < pLength; j++, i++)
		this->str[i] = p.str[i];
	return *this;
}
//
//TString TString::operator+(char* s)
//{
//	return TString();
//}
//
//TString TString::operator=(char* s)
//{
//	return TString();
//}
//
//TString TString::operator+=(char* s)
//{
//	return TString();
//}
//
//bool TString::operator==(TString& p)
//{
//	return false;
//}
//
//bool TString::operator>(TString& p)
//{
//	return false;
//}
//
//bool TString::operator<(TString& p)
//{
//	return false;
//}
//
//bool TString::operator!=(TString& p)
//{
//	return false;
//}
//
//char& TString::operator[](int i)
//{
//	return ;
//	// TODO: âñòàâüòå çäåñü îïåðàòîð return
//}
//
//int TString::Find(char c)
//{
//	return 0;
//}
//
//int TString::Find(TString& p)
//{
//	return 0;
//}
//
//TString* TString::split(char c)
//{
//	return nullptr;
//}