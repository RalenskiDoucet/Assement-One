#include<iostream>
#include "StringClass.h"

int main()
{

	String String1 = String("Ralenski");
	int len =String1.GetLength();
	String String2 = String("Tommy");
	 int len2 = String2.GetLength();
	 String String3 = String("Johnny");
	 int len3 = String3.GetLength();
	 String String4 = String("Terence");
	 int len4 = String4.GetLength();
	 bool a = String1 == (String2);
	 bool b = String1 == (String3);
	 bool c = String1 == (String1);
	 bool d = String2 == (String3);
	 bool e = String2 == (String4);
	 bool f = String3 == (String4);
	system("pause");
} 