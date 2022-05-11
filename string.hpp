#ifndef __STRING_HPP
#define __STRING_HPP
#include <iostream>

/*class String{

private:
char* arr;
size_t size;
size_t capacity;

public:
String();
String(String const&);
~String();
String& operator=(String const&);

size_t getSize() const {return size;}
char* getString() const {return arr;}*/

class MyString
{
	char* str;
	size_t size;

	void copyFrom(const MyString& other);
	void free();
public:
	MyString();
	MyString(const char*);

	MyString(const MyString&);
	MyString& operator=(const MyString& other);
	~MyString();

	size_t getSize() const;
	void concat(const MyString& other);

	const char* c_str() const;
};

void Input();
};




#endif