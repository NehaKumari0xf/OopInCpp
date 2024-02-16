/* cpp program to read a string from keyboard and print that string on screen*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string data;
	cout<<"Enter any string:";
	
	getline(cin,data);
	
	cout<<"\nYou have entered:"<<data;
	return 0;
}
/*
write a C++ program that will read name,fathers name,mothers name,address, class, roll and marks
of 5 subject and print result.

