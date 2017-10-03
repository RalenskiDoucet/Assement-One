#include "StringClass.h"

String::String()
{
	mString = new char[26];
}
String::String(const char *string)
{
	mString = string;
}
int String::GetLength(int Length)
{
	//Loop over array until you find \0
	//return value used to iterate over array
	int iter = 0;
	while (mString[iter]!='\0')
	{

	}
}
void String::UpperCase(char myArray[26])
{
}

void String::LowerCase(char myArray[26])
{
}

bool String::operator==(const String & other)
{
	return false();
}
