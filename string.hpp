#ifndef __STRING_HPP
#define __STRING_HPP
#include <iostream>



class String
{
	char* str;
	size_t size;

	
public:
	String();

	String(const String&);
	String& operator=(const String& other);
	~String();

	size_t getSize() const {return size;}

	
};


#endif