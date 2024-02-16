/*
C has no data type for string value. String is stored using character array.

C++ has string class to handle string data
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name; //here name is a string type object, it can store string data
	
	name="Kajal Kumari";
	cout<<"My name  is:"<<name;
	return 0;
}
