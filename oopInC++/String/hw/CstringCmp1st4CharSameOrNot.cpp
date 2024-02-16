/*Write a cpp program that will accept any two strings and print both string's
first 4 characters are the same or not.*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[100],str2[100];
	cout<<"Enter 1st string:";
	cin.getline(str1,99);
	cout<<"Enter 2nd string:";
	cin.getline(str2,99);
	cout<<"Str1="<<str1<<endl<<"str2="<<str2;
	//compare both string
	int rv=strnicmp(str1,str2,4);
	if(rv==0)
	cout<<"\nFirst 4 charracter of given string are same.";
	else
	cout<<"\nSorry!! ,First 4 charracter are not same in given string.";
	
	return 0;
}
