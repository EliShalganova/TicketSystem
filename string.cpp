#include <iostream>
#include "string.hpp"
#include <cstring>

///from: https://github.com/Angeld55/Object-oriented_programming_FMI
String::String()
{
	str = new char[1];
	str[0] = '\0';
	size = 0;
}

String::String(const char* string_2)
{
	if(string_2 == nullptr)
	{
		str = new char[1];
		str[0] = '\0';
		size = 0;
	}
	else
	{
		size = strlen(string_2);
		str = new char[size + 1];
		strcpy(str, string_2);
	}
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

bool String::compare(const String &string_2) const {
        return strcmp(this->str, string_2.str) == 0;
    }

bool operator==(const String &string_1, const String &string_2)
{
     return string_1.compare(string_2);
}

 std::ostream &operator<<(std::ostream &out, const String &string_2)
{
          return (out << string_2.getStr());
}
  
