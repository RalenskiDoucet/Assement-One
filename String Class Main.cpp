#include<iostream>
#include "StringClass.h"

int main()
{
	// Creates new String Class Arrays. 
	// Assigns Values to The Indexes of mString Array.
	// The GetLength Function Gets the Length of the of Array.
	// The GetLength Function Also Gets the Amount if Indexes in the Array.
	String String1 = String("Ralenski");
	int len =String1.GetLength();
	String String2 = String("Tommy");
	int len2 = String2.GetLength();
	String String3 = String("Johnny");
	int len3 = String3.GetLength();
	String String4 = String("Terrence");
	int len4 = String4.GetLength();
	//Tests the bool fuction.
	//Also Tests the Compare Function.
	//If the bool Statement is True then True should be returned.
	//If the bool Statement is False then False should be returned.
		bool A = String1 == (String2);
		bool B = String1 == (String3);
		bool C = String1 == (String4);
		bool D = String1 == (String1);
		bool E = String2 == (String3);
		bool F = String2 == (String4);
		bool G = String3 == (String4);
	//Tests the Uppercase Function.
	//If LowerCase than UpperCase should be retured.
	//Test the LowerCase Function.
	//If UpperCase than LowerCase should be returned.
		String1.UpperCase();
		system("pause");
} 