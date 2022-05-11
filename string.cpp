#include <iostream>
#include "string.hpp"
#include <cstring>

/*const size_t default_capacity = 15;

String::String()
{
    size = 0;
    capacity = default_capacity;
    arr = new char[capacity];

}

String::~String()
{
    delete [] arr;
}

String::String(String const& string_2)
{
    size = string_2.size;
    capacity = string_2.capacity;
    arr = new char[capacity];
    strcpy(arr,string_2.arr);
}

String& String::operator=(String const& string_2)
{
   if(this != &string_2)
   {
       delete [] arr;
       size = string_2.size;
       capacity = string_2.capacity;
       arr = new char[capacity];
       strcpy(arr,string_2.arr);
   }
}

void String::Input()
{ 
  char c = 'a';
  while(c != '\n')
  {
      std::cin.get(c);
      if(capacity == size)
      {
          char* old = arr;
          capacity *= 2;
          arr =  new char[capacity];
          strcpy(arr,old);
      }
      arr[size] = c;
      size++;
  }*/

  void MyString::copyFrom(const MyString& other)
{
	str = new char[strlen(other.str) + 1];
	strcpy(str, other.str);
	size = other.size;
}
void MyString::free()
{
	delete[] str;
}

MyString::MyString()
{
	str = new char[1];
	str[0] = '\0';
	size = 0;
}

MyString::MyString(const char* data)
{
	if(data == nullptr)
	{
		str = new char[1];
		str[0] = '\0';
		size = 0;
	}
	else
	{
		size = strlen(data);
		str = new char[size + 1];
		strcpy(str, data);
	}
}

MyString::MyString(const MyString& other)
{
	copyFrom(other);
}
MyString& MyString::operator=(const MyString& other)
{
	if (this != &other)
	{
		free();
		copyFrom(other);
	}
	return *this;
}
MyString::~MyString()
{
	free();
}


size_t MyString::getSize() const
{
	return size;
}
void MyString::concat(const MyString& other)
{
	char* temp = new char[getSize() + other.getSize() + 1];
	strcpy(temp, str);
	strcat(temp, other.str);

	delete[] str;
	str = temp;
	size = size + other.getSize();
}

const char* MyString::c_str() const
{
	return str;
}
  
