#pragma once

	//The ability to access a character at a certain index within the string class

	//The ability to append one string to another
	//The ability to prepend one string to another
	//The ability to return the string as a basic constant C - style string(const char*)

	
	//The ability to find a sub - string within the string class
	//The ability to find a sub - string within the string class, starting from a certain index within the string
	//The ability to replace a sub - string found within the string with a different sub - string
	//The ability to set the string to an input C - style string





class String
{
private:

	char *string[255];
	//The name of the Character array and the amount of addresses in the array.





public:

	String();
	//The defalut constructor on the string class.
	
	
	
	
	String(const char*);
	

	
	
	void Length(int);
	// Displays the length of the character array.
	//The ability to query the string’s length, returning an integer


	void UpperCase(char myArray[255]);	
	//The ability to convert the string to a duplicate containing all uppercase letters



	void LowerCase(char myArray[255]);	
//The ability to convert the string to a duplicate containing all lowercase letters
	
 

	bool operator==(const String& other);	
//The ability to compare if the string is the same as another string class
};