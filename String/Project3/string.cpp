//Jon Curnutt and Robert Thompson
//String Project
//2-1-19
//Object Oriented Programming
//Dr. Steil

#include<iostream>
#include<string>
#include"string.h"

using namespace std;

String::String()
{
	pString = NULL;
}

String::String(const char* const newString)
{
	pString = NULL;
	set(newString);
}

String::String(const String& newString)
{
	pString = NULL;
	set(newString.pString);
}

String::String(int i) 
{
	pString = NULL;
	set(i);
}

String::String(char c) 
{
	pString = NULL;
	set(c);
}

String::~String()
{
	destroy();
}

void String::destroy()
{
	if (pString != NULL)
	{
		delete[]pString;
		pString = NULL;
	}
}

void String::set(const char* const newString)
{
	destroy();
	if (newString != NULL)
	{
		int size = strlen(newString) + 1;
		pString = new char[size];
		strcpy_s(pString, size, newString);
	}
	else
	{
		pString = NULL;
	}
}

void String::set(const String& newString)
{
	set(newString.pString);
}

void String::set(int i) 
{
	destroy();
	const int MAX_LENGTH = 16;
	pString = new char[MAX_LENGTH];

	_itoa_s(i, pString, MAX_LENGTH, 10);
}

void String::set(char c)
{
	destroy();
	pString = new char[2];
	pString[0] = c;
	pString[1] = '\0';
}

bool String::contains(char c) 
{

}

bool String::contains(String s)
{

}

bool String::contains(const char* const s)
{

}

bool String::contains(int i)
{

}

void String::insert(String, char*, int, char, int)
{

}

bool String::isEmpty()
{
	//when pString is null the condition will short circuit
	return (pString == NULL || strlen(pString) == 0);
}



void String::write(ostream& out)
{
	if (pString != NULL)
	{
		out << pString;
	}

}
int String::length() 
{
	int result = 0;
	if (!isEmpty())
	{
		result = strlen(pString);

	}

	return result;
}

void String::append(String postfix)
{
	//could be appending to itself

	int newLength = length() + postfix.length() + 1;
	char* result = new char[newLength];
	//start the result with this string
	if (isEmpty())
	{
		result[0] = '\0';
	}
	else 
	{
		strcpy_s(result, newLength, pString);
	}
	//then add on the other string
	if (postfix.isEmpty()) 
	{
		//do nothing
	}
	else
	{
		strcat_s(result, newLength, postfix.pString);
	}
	set(result);
	
}

void String::prepend(String prefix)
{
	String result(prefix);
	result.append(pString);
	set(result);
}

