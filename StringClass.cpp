#include "StringClass.h"

String::String()
{
	mString = new char[26];
}
String::String(const char *string)
{
	mString = string;
}
int String::GetLength()
{
	//Loop over array until you find \0
	//return value used to iterate over array
	int iter = 0;
	while (mString[iter] != '\0')
	{
		iter++;
	}
	return iter++;
}
String String::UpperCase()
{
	//If mString[i] is not capitalized , capitalize mString[i].
	int i = 90, int j = 65;
	if (mString[i] != 90)
		do(i == j);
			while (i != 90);
		return UpperCase();
}

String String::LowerCase()
{
	//If mString[i] is capitalized, uncapitalize mString[i].
	int i = 90, int j = 65;
	if (mString[j] != 90)
		do(j == i);
			while (j != 65);
	return LowerCase();
}

bool String::operator==(String &other)
{	
	if (GetLength() != other.GetLength())
		return false;
	//Loop through the string
	for (int i = 0; i < GetLength(); i++)
	{
	//Compare each value to each other
	//if not same character return falses
		if (mString[i] != other.mString[i])
			return false;

	}
	//Loop end
	//return true
	return true;
	
}
