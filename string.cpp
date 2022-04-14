#include <String.h>
#include "..\headers\String.h"

String::String()
{
	string = 0;
	length = 0;
}

String::String(char* _string)
{
	length = StrLen(_string);
}

String::~String()
{
}

char* String::GetString()
{
	return nullptr;
}

void String::SetString(char* _string)
{
}

int String::GetLength()
{
	return 0;
}

int String::StrLen(const char* str)
{
	return 0;
}

int String::Find(char c)
{
	return 0;
}

int String::Find(String& p)
{
	return 0;
}

int String::GetCountOfSplit()
{
	return 0;
}

String* String::Split(char c)
{
	return nullptr;
}

String String::operator+(const char* s)
{
	return String();
}

String String::operator+(const String& p)
{
	return String();
}

String String::operator=(const String& p)
{
	return String();
}

String String::operator=(const char* s)
{
	return String();
}

String String::operator+=(const char* s)
{
	return String();
}

String String::operator+=(const String& p)
{
	return String();
}

bool String::operator==(String& p)
{
	return false;
}

bool String::operator<(String& p)
{
	return false;
}

bool String::operator>(String& p)
{
	return false;
}

char& String::operator[](int n)
{
	// TODO: вставьте здесь оператор return
}

char* String::DoubleStr(int k)
{
	return nullptr;
}

std::ostream& operator<<(std::ostream& B, String& A)
{
	// TODO: вставьте здесь оператор return
}

std::istream& operator>>(std::istream& B, String& A)
{
	// TODO: вставьте здесь оператор return
}
