#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main()
{
	string name="Anshu Kumari";
//	step 1: Get the c style string of name.
	const char *csname=name.c_str();
	char cstr[100];
	strcpy(cstr,csname);
//	step 2: Convert the string in lower case using cstring function.
	strlwr(cstr);
//	step 3: Now convert c style string into c++ string.
	name=string(cstr);
	cout<<name;

return 0;
}
