#include<iostream>
#include "StringClass.h"
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
	
	
	//Tests the Uppercase Function.
	//If LowerCase than UpperCase should be retured.
	String temp0 = String1.UpperCase();
	int len5 = temp0.GetLength();
	String temp1 = String2.UpperCase();
	int len6 = temp1.GetLength();
	String temp2 = String3.UpperCase();
	int len7 = temp2.GetLength();
	String temp3 = String4.UpperCase();
	int len8 = temp3.GetLength();
	
	
	//Test the LowerCase Function.
	//If UpperCase than LowerCase should be returned.
	String temp4 = String1.LowerCase();
	int len9 = temp4.GetLength();
	String temp5 = String2.LowerCase();
	int len10 = temp5.GetLength();
	String temp6 = String3.LowerCase();
	int len11 = temp6.GetLength();
	String temp7 = String4.LowerCase();
	int len12 = temp7.GetLength();

	
	//This function Should ask the user for input to search for a string.
	//This should also provide a value expressing the length of the string.



	
	//For the function GetIndex() .
	//The contents that are in mString[i] should be returned
	//The Index of the String can be refered to as either the length of the index that i was found at.
	//Or it can be refered to as what is found at that index. 
	String myNewString1 = String("Ralenski");
	char a = myNewString1.GetIndex(2);
	String myNewString2 = String("John");
	 char b = myNewString2.GetIndex(3);
	String myNewString3 =String("Carl");
	 char c = myNewString3.GetIndex(2);
	String myNewString4 = String("Tommy");
	char d = myNewString4.GetIndex(4);
	 
	system("pause");
}
