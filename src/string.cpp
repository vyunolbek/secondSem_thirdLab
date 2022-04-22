#include <iostream>
#include <String.h>
#include <cstring>
#include "..\headers\String.h"

TString::TString()
{
	len = 0;
	str = nullptr;
}

TString::TString(char* str)
{
	len = strlen(str);
	this->str = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		this->str[i] = str[i];
	}
	this->str[len] = '\0';
}

TString::TString(int n, char c)
{
	str = new char[n + 1];
	len = n;
	for (int i = 0; i < len; i++)
		str[i] = c;
	str[len] = '\0';
}

TString::TString(const TString& p)
{
	len = p.len;
	this->str = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		this->str[i] = p.str[i];
	}
	this->str[len] = '\0';
}

TString::~TString()
{
	delete[] this->str;
}

TString& TString::operator=(const TString& p)
{
	if (this->str != nullptr) delete[] str;
	len = p.len;
	this->str = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		this->str[i] = p.str[i];
	}
	this->str[len] = '\0';
	return *this;
}

void TString::Print()
{
	std::cout << str << std::endl;
}

int TString::GetLen()
{
	return len;
}

TString TString::operator+(const TString& p)
{
	TString newstr;
	int thisLength = len;
	int pLength = p.len;
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

TString& TString::operator+=(const TString& p)
{
	*this = *this + p;
	return *this;
}

TString TString::operator+(char* s)
{
	TString stemp(s);
	return *this + stemp;
}

TString TString::operator=(char* s)
{
	TString stemp(s);
	*this = stemp;
	return *this;
}

TString TString::operator+=(char* s)
{
	TString stemp(s);
	*this = *this + stemp;
	return *this;
}

bool TString::operator==(TString& p)
{
	bool flag = false;
	if (p.len != len) flag = false;
	else if (strcmp(p.str, str) == 0) flag = true;
	return flag;
}

bool TString::operator>(TString& p)
{
	bool flag = true;
	for (int i = 0; i < fmin(len, p.len); i++)
		if (str[i] < p.str[i])
		{
			flag = false;
			break;
		}
	return flag;
}

bool TString::operator<(TString& p)
{
	return !(*this > p);
}

bool TString::operator!=(TString& p)
{
	return !(p == *this);
}

char& TString::operator[](int i)
{
	char temp;
	if (i >= 0 && i < len)
	{
		for (int n = 0; n < i + 1; n++)
			temp = str[n];
		return temp;
	}
	else throw "Error";
}

int TString::Find(char c)
{
	char temp;
	int i = 0;
	for (; i < len; i++)
	{
		if (str[i] == c)
		{
			temp = c;
			break;
		}
	}
	return i;
}

int TString::Find(TString& p)
{
	for (int i = 0; i < len; i++)
	{
		if (str[i] == p.str[0])
		{
			int k = i;
			for (int j = 0; str[k] == p.str[j]; j++, k++)
				if (j == p.len) return i;
		}
	}
	return -10;
}

std::ostream& operator<<(std::ostream& B, TString& A)
{
	for (int i = 0; i < A.len; i++) B << A.str[i];
	return B;
}

std::istream& operator>>(std::istream& B, TString& A)
{
	B >> A.len;
	if (A.len != 0) delete[] A.str;
	A.str = new char[A.len + 1];
	for (int i = 0; i < A.len; i++) B >> A.str[i];
	A.str[A.len] = '\0';
	return B;
}
