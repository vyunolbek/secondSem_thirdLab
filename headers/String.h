#pragma once
#include <iostream>
class String
{
	String();
	String(char* _string);
	String(int len, char c);
	String(const String& p);
	~String();
	char* GetString();
	void SetString(char* _string);
	int GetLength();
	int StrLen(const char* str);
	int Find(char c);
	int Find(String& p);
	int GetCountOfSplit();
	String* Split(char c);
	String operator + (const char* s);
	String operator + (const String& p);
	String operator = (const String& p);
	String operator = (const char* s);
	String operator += (const char* s);
	String operator += (const String& p);
	bool operator == (String& p);
	bool operator < (String& p);
	bool operator > (String& p);
	char& operator [] (int n);
	friend std::ostream& operator << (std::ostream& B, String& A);
	friend std::istream& operator >> (std::istream& B, String& A);
	char* DoubleStr(int k);
protected:
	char* string;
	int length;
};