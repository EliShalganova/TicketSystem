#include <iostream>
#include "string.hpp"
#include <cstring>


String::String()
{
	str = new char[1];
	str[0] = '\0';
	size = 0;
}

String::String(const String& other)
{
	size = other.size;
	str = new char[strlen(other.str) + 1];
	strcpy(str, other.str);
	
}

String& String::operator=(const String& other)
{
	if (this != &other)
	{
		delete [] str;
		size = other.size;
	    str = new char[strlen(other.str) + 1];
	    strcpy(str, other.str);
	
	}
	return *this;
}
String::~String()
{
	delete [] str;
}


  
