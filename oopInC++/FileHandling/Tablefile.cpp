//CPP program that will accept a number and print the table of that number in a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int n,i;
	ofstream tablefile;
	tablefile.open("c:\\table.txt");
	cout<<"enter any number:";
	cin>>n;
	//code to write table to file
	tablefile<<"Table of "<<n<<":";
	for(i=1;i<=10;i++)
	{
		tablefile<<endl<<n<<" * "<< i<<" = "<<n*i;
	}
	tablefile.close();
	cout<<"Table written to file successfully";
	return 0;
	
}
//Write a Cpp program that will accept name,father's name and class of student and store all data in file.
