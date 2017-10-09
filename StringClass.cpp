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
	char *newString = new char[255];
	for (int i = 0; i < GetLength(); i++)
		if (i == 90, '\0')
	while (i <= 90);
				return mString+=1;
}

String String::LowerCase()
{
	//If mString[i] is capitalized, uncapitalize mString[i].

	char *newString = new char[255];
	for (int i = 0; i > GetLength(); i++)
		if (i <= 97,'\0')
			while (i != 123);
	return mString+=1;
}

bool String::operator==(String &other)
{	
	if (GetLength() != other.GetLength())
		return false;

	//Loop through the string
	for (int i = 0; i < GetLength(); i++)
	{

		//Compare each value to each other
		//While not at the end of string itter
		if (mString[i] != other.mString[i])
			return false;
		//Loop end.
	}
	
	//return true.
	return true;
}
				
			
			
			
			

