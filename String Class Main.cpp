#include <iostream>
#include "StringClass.h"
#include <string>
#include <fstream>



int main()
{
	std::fstream StringClass;
	StringClass.open("String.txt", std::ios_base::out | std::ios_base::in);
	
	// Creates new String Class Arrays. 
	// Assigns Values to The Indexes of mString Array.
	// The GetLength Function Gets the Length of the of Array.
	//The Length of the String should be correctly displayed in locals window.
	// The GetLength Function Also checks number of indexes in the Array.
	String String1 = String("Ralenski");
	int len = String1.GetLength();
	String String2 = String("Tommy");
	int len2 = String2.GetLength();
	String String3 = String("Johnny");
	int len3 = String3.GetLength();
	String String4 = String("Terrence");
	int len4 = String4.GetLength();
	
	//Tests the operator==.
	//Also Compares String via Bool.
	//If the bool Statement is True then True should be returned.
	//For bool to be true the Strings Length must be the same.
	//If the bool Statement is False then False should be returned.
	//For the bool to be false the String Length must be unequal.
	bool A = String1 == (String2);
	bool B = String1 == (String3);
	bool C = String1 == (String4);
	bool D = String1 == (String1);
	bool E = String2 == (String3);
	bool F = String2 == (String4);
	bool G = String3 == (String4);
	
	//Tests the Uppercase Function.
	//If LowerCase than UpperCase should be retured.
	String temp0 = String1.UpperCase();
	int  UpperCaseString = temp0.GetLength();
	String temp1 = String2.UpperCase();
	int UpperCaseString2 = temp1.GetLength();
	String temp2 = String3.UpperCase();
	int UpperCaseString3 = temp2.GetLength();
	String temp3 = String4.UpperCase();
	int UpperCaseString4 = temp3.GetLength();

	//Test the LowerCase Function.
	//If UpperCase than LowerCase should be returned.
	String temp4 = String1.LowerCase();
	int LowerCaseString = temp4.GetLength();
	String temp5 = String2.LowerCase();
	int LowerCaseString2 = temp5.GetLength();
	String temp6 = String3.LowerCase();
	int LowerCaseString3 = temp6.GetLength();
	String temp7 = String4.LowerCase();
	int LowerCaseString4 = temp7.GetLength();

	//This function Should compare the string to possible sub String and search for a substring.
	//If an substring was found the bool should return true.
	//If an substring was not found the bool should return false.
	String foundString = String("Ralenski");
	bool H = foundString.findSubString(String("alenski"));
	String foundString2 = String("James");
	bool I = foundString2.findSubString(String("maes"));
	String foundString3 = String("Corey");
	bool J = foundString3.findSubString(String("reoy"));
	String foundString4 = String("Jerry");
	bool K = foundString4.findSubString(String("erry"));
	

	//For the function GetIndex() .
	//The contents that are in mString[i] should be returned
	//The Index of the String can be refered to as either the length of the index that i was found at.
	//Or it can be refered to as what is found at that index. 

	char L = String1.GetIndex(7);
	char M = String2.GetIndex(4);
	char N = String3.GetIndex(4);
	char O = String4.GetIndex(6);
	system("pause"); 
	StringClass.close();
}
