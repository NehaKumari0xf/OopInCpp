/*C++ program to read data from file*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream myFile("c:\\c++\\c++2\\filehandling\\readFromFile.c");
	if(!myFile.is_open())
	{
		cout<<"File not found!";
		return 0;
	}	
	char ch;
	/*myFile>>ch;
	cout<<"First character of file is:"<<ch;
	myFile>>ch;
	cout<<"Second character of file is:"<<ch;
	*/
	cout<<endl<<"Current File Pointer position:"<<myFile.tellg();
	cout<<"File Content:\n";
	/*while(!myFile.eof())
	{
		//myFile>>ch;//will not read white spaces
		myFile.get(ch);
		//cout<<ch;	
	}*/
	cout<<endl<<"Current File Pointer position:"<<myFile.tellg();
	myFile.seekg(0,ios::end);
	cout<<endl<<"Current File Pointer position:"<<myFile.tellg();
	int fsize=myFile.tellg();
	//move get pointer on begning of file
	myFile.seekg(0,ios::beg);
	for(int i=0;i<400;i++)
	{
		myFile.get(ch);
		cout<<ch;
	}
	myFile.close();
	return 0;	
}
