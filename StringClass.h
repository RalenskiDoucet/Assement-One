#pragma once
#include <string>

	//The ability to access a character at a certain index within the string class

	//The ability to append one string to another
	//The ability to prepend one string to another
	//The ability to return the string as a basic constant C - style string(const char*)

	
	//The ability to find a sub - string within the string class
	//The ability to find a sub - string within the string class, starting from a certain index within the string
	//The ability to replace a sub - string found within the string with a different sub - string
	//The ability to set the string to an input C - style string



class String
	//This is the name of the class that will be used trough the different files of this project.
	//This class has only two levels of protection.
	//These protection level are private and public.
{
private:

	const char* mString;
//The name of the Character array and the amount of indexes in the array.
//This declares a character array and the length of the array.
//The defrence pointer here is being used to modify the varaible to a pointer.

public:
	 
	String();
//The defalut constructor on the string class.
//The values and for this constructor defined in the StringClass.cpp file.
//The values the of this defalut constructor in definition will be of type char,int.
	
	
	
	String(const char* string);
//This overloaded constructor hard set the const varaible.
//The varaible is of type char and has a derefernce pointer.
//For this Constructor the derefernce pointer returns the value pf the varaible stored.

	
	int GetLength();
//The ability to query the string’s length, returning an integer.
//This function should return a varaible of type int.
//The varaible it return is the length of string array.


	
	String UpperCase();	
//The ability to convert the string to a duplicate containing all uppercase letters.
//To do this I have choosen to use an array where while i=65,i+=2.
//I have also choosen to use a do while loop that will itter by 2.

	
	String LowerCase();	
//The ability to convert the string to a duplicate containing all lowercase letters.
//To do this I have choosen to use an array where while myArray j=0,j+=2. 
//I have also choosen to use a do while loop that will itter by2.
 

	
	bool operator==(String& other);	
//The ability to compare if the string is the same as another string class.
//To do this I have choosen to use a bool to determin if the two different string are equal
//To do this I have choosen to use an overloaded operator to compare two different strings.

 String	findSubString(String&other);
//This function Should ask the user for input to search for a string.
//This should also provide a value expressing the length of the string.
//The second function should allow the user to have a input.


 String StringIndex();


};