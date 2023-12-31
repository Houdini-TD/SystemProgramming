#include "MyString.h"
#include <iostream>
#include <cstring>
#include <fstream>
#include <string>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

MyString::MyString()
{
    data = nullptr;
    cout << "Default constructor called." << endl;
}

MyString::MyString(const char* str)
{
    data = new char[strlen(str) + 1];
    strcpy_s(data, strlen(str) + 1, str);
    cout << "Parameterized constructor called." << endl;
}

MyString::MyString(const MyString& other)
{
    data = new char[strlen(other.data) + 1];
    strcpy_s(data, strlen(other.data) + 1, other.data);
    cout << "Copy constructor called." << endl;
}

MyString::~MyString()
{
    if (data) {
        delete[] data;
    }
    cout << "Destructor called." << endl;
}

void MyString::set(const char* str)
{
    cout << "Set string";
    data = new char[strlen(str) + 1];
    strcpy_s(data, strlen(str) + 1, str);
}

void MyString::update()
{
    int length = strlen(data);
    if (length % 3 == 0) {
        char* newData = nullptr;
        int letterCounter = 0;

        for (size_t i = 0; i < length; i++) {
            if (!isdigit(data[i]) || (isdigit(data[i]) && data[i] % 3 != 0)) {
                letterCounter++;
            }
        }

        newData = new char[letterCounter + 1];
        newData[letterCounter] = '\0';

        for (size_t i = 0, j = 0; i < length; i++) {
            if (!isdigit(data[i]) || (isdigit(data[i]) && data[i] % 3 != 0)) {
                newData[j] = data[i];
                j++;
            }
        }

        cout << "������� �������� �����: ";
        string fileName;
        getline(cin, fileName);

        writeToFile(data, "Old value: ", fileName);
        writeToFile(newData, "New value: ", fileName);
        delete[] data;
        data = newData;
    }
}

void MyString::writeToFile(const char* str, std::string hint, string fileName) {
    std::ofstream file(fileName, std::ios_base::app);
    if (file.is_open()) {
        file << hint << ": " << str << std::endl;
        file.close();
        cout << "String saved to 'output.txt'." << endl;
    }
}



void MyString::print()
{
    if (data) {
        cout << "\nString: " << data << endl;
    }
    else {
        cout << "\nString is empty." << endl;
    }
}