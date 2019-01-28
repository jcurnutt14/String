#include<iostream>

class String
{
public:
	String(); //default
	String(const String& newString); //copy
	String(const char* const newString); //conversion
	String( int i );	//write
	String( char c );	//write
	~String();
	void set(const char* const newString);
	void set(const String& newString);
	void set( int i );	//write
	void set( char c );	//write
	void write(std::ostream& out);
	void append(String postfix);//receive the parameter and set it with the above set functions;
	void prepend(String prefix);//receive the parameter and set it with the above set functions
	bool contains( char c);	//write
	bool contains( String s );	//write
	bool contains( const char* const s );	//write
	bool contains( int i );	//write
	void insert(String, char*, int, char, int);  //at an index		//write
	bool isEmpty(); // empty when the pointer is null or the first character is \0
	int length();
	bool equals(); //take String, char*, char or int --> return true if the two values are equal
	char at(); //returns a char at the given index
	void toUpper(); //change all characters in a string to upper case
	void toLower(); //change all characters in a string to lower case
	void trimStart(); // trim all white space from beginning
	void trimEnd(); // trim all white space from end
	void trim(); // trim white space from beginning and end --> call the two above functions
	void replace(); // takes 2 parameters, search for occurence of first parameter and replace it with 2nd parameter

private:
	char* pString;
	void destroy();
};
