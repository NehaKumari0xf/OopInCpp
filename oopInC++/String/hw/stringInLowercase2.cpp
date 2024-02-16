#include<iostream>
#include<string>
#include<cstring>
#include<ctype.h>
using namespace std;

int main()
{
	string name="Anshu Mala";
	for(int i=0;i<name.length();i++)
	{
		name[i]=tolower(name[i]);
	}
	cout<<name;
}
//1. write a cpp program that will accept 10 names from user and print all names that ends with  kumari.
//2. write a cpp program that will accept 10 names form user and prints all names begins with Raj.
//3. write a cpp program that will accept 10 names from user and print all names that contains raj.
