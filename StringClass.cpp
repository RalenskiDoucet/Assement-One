#include "StringClass.h"

String::String()
{
	mString = new char[255];
}
String::String(const char *string)
{
	mString = string;
}
void String::getLength(int Length)
{
	mLength=Length;
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
