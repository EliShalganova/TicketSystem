#ifndef __STRING_HPP
#define __STRING_HPP
#include <iostream>



class String
{
	char* str;
	size_t size;

	
public:
	String();
    String(const char*);

	String(const String&);
	String& operator=(const String& other);
	~String();

    char* getStr() const {return str;}
	size_t getSize() const {return size;}

	
    bool compare(const String &) const ;
	
};
std::ostream &operator<<(std::ostream &out, const String &);
bool operator==(const String &, const String&);
#endif