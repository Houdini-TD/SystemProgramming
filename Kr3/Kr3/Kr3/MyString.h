#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
class MyString
{
private:
	void writeToFile(const char* str, std::string hint, std::string fileName);
	char* data;
public:
	MyString();
	MyString(const char* str);
	MyString(const MyString& other);
	~MyString();
	void set(const char* str);
	void update();
	void print();
};