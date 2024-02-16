/* C++ File Handling/ File Input/Output*/
/*
Stream->Logical device that performs i/o operations with different devices.
C++ provides following classes to perform output and input of characters to/from files:
1. ofstream -> Stream class to write on files
2. ifstream ->Stream class to read from files
3. fstream -> Stream class to both read and write from/to file

These classes are derived directly or indirectly from the classes istream and ostream.
*/
/* C++ program to write data to file*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	/*1. create an ofstream object */
	ofstream myfile;
	
	/*2. associate a file with stream */
	myfile.open("c:\\c++\\c++2\\filehandling\\hello.txt",ios::trunc);
	//check file is successfully associated(file is opend or not) or not
	if(!myfile.is_open())
	{
		cout<<"unable to open file";
		exit(0);
	}
	
	
	/* write data to file*/
	//myfile<<"This is my first c++ data in file";
	myfile<<"\nMy Name is Neha Kumari. I am a student of Gaya college, Gaya.";
	//myfile<<"\nMy Name is Neha Kumari. I am a student of Gaya college, Gaya.";	
	/*4. close file/disassociate file from stream*/
	myfile.close();
	
	
}
