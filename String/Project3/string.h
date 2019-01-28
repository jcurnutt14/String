#include<iostream>

class String
{
public:
	String();
	String(const String& newString);
	String(const char* const newString);
	String( int i );	//write
	String( char c );	//write
	~String();
	void set(const char* const newString);
	void set(const String& newString);
	void set( int i );	//write
	void set( char c );	//write
	void write(std::ostream& out);
	// append takes an int, char, char* or String&
	// prepend takes an int, char , char* or String&
	bool contains( char c);	//write
	bool contains( String s );	//write
	bool contains( const char* const s );	//write
	bool contains( int i );	//write
	void insert(String, char*, int, char, int);  //at an index		//write
	bool isEmpty(); // empty when the pointer is null or the first character is \0
	int length();
private:
	char* pString;
	void destroy();
};
