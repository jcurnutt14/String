//Jon Curnutt and Robert Thompson
//String Project
//2-1-19
//Object Oriented Programming
//Dr. Steil

#include "string.h"

void main() {
	String s;
	s.set(INT_MAX);
	s.append('a');
	s.append(s);
	s.write(cout);
}