#include<iostream>
#include "StringClass.h"
#include <fstream>
#include <string>

int main()
{

	// Creates new String Class Arrays. 
	// Assigns Values to The Indexes of mString Array.
	// The GetLength Function Gets the Length of the of Array.
	// The GetLength Function Also Gets the Amount if Indexes in the Array.
	String String1 = String("Ralenski0");
	int len = String1.GetLength();
	String String2 = String("Tommy0");
	int len2 = String2.GetLength();
	String String3 = String("Johnny0");
	int len3 = String3.GetLength();
	String String4 = String("Terrence0");
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
	system("pause");
	
	//Tests the Uppercase Function.
	//If LowerCase than UpperCase should be retured.
	String temp0 = String1.UpperCase();
	String temp1 = String2.UpperCase();
	String temp2 = String3.UpperCase();
	String temp3 = String4.UpperCase();
	system("pause");
	
	//Test the LowerCase Function.
	//If UpperCase than LowerCase should be returned.
	String temp4 = String1.LowerCase();
	String temp5 = String2.LowerCase();
	String temp6 = String3.LowerCase();
	String temp7 = String4.LowerCase();
	system("pause");
	
	//This function Should ask the user for input to search for a string.
	//This should also provide a value expressing the length of the string.
	String FoundString1 = String1.findSubString(String2);
	String FoundString2 = String2.findSubString(String3);
	String FoundString3 = String3.findSubString(String4);
	String FoundString4 = String4.findSubString(String1);
	system("pause");
	
	//For the function GetIndex() .
	//The contents that are in mString[i] should be returned
	//The Index of the String can be refered to as either the length of the index that i was found at.
	//Or it can be refered to as what is found 

	system("pause");
}
