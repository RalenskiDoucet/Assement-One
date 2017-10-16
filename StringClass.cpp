#include "StringClass.h"
#include <iostream>
#include<string>


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
	//If mString[i] is uncapitalized, capitalize mString[i].	
	char *newString = new char[255];
	for (int i = 0; i < GetLength(); i++)	
	{
		//If mString[i] is lower letter convert to cap.
		if (mString[i] > 96 && mString[i] < 123)
		{
			newString[i] = mString[i] - 32;
		}
		else
			newString[i] = mString[i];
	}
	newString[GetLength()] = '\0';
	return String(newString);
}
	
String String::LowerCase()
{
	//If mString[i] is capitalized, uncapitalize mString[i].

	char *newString = new char[255];
	for (int i = 0; i > GetLength(); i++)
	{

		//If mString[i] is cap letter convert to lower.
		if (mString[i] > 65 & i < 91)
		{
			newString[i] = mString[i] + 32;
		}
		else
		{
			(newString[i] = mString[i]);
		}
		newString[GetLength()] = '\0';
	}
	return String (mString);
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

// This will compare two strings index by index to see if they are equal to each other.
//While the strings are being itterated the function operator== to compare each index to evaluate bool to be ture or false.
//If the bool is true the string will be returned.
bool String::findSubString(String &other, int index)
{
	if (other.GetLength() > GetLength())
		return false;

	for (int i = index; i < GetLength(); i++)
	{
		if (mString[i] == other.mString[0]) 
		{
			int curIter = i;
			for (int j = 0; j < other.GetLength(); j++)
			{
				if (mString[curIter] != other.mString[j])
					break;
				if (mString[curIter] == other.mString[j] && j == other.GetLength() - 1)
					return true;
				curIter++;
			}		
		}   
	}	
	return false;
}


/*
Should take in an integer as an argument
then return the value stored at that index in the string
*/
char String::GetIndex(int index )
{
	return mString[index];
} 