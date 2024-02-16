//Write a Cpp program that will accept name,father's name and class of student and store all data in file.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string name, fname, clas2,clas;
    ofstream file;
    
    file.open("c:\\c++\\c++2\\filehandling\\studentdata.txt",ios::out);
	
	if(!file.is_open())
	{
		cout<<"error!! in opening file.";
		exit(0);
	}
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Enter your father's name: ";
    getline(cin,fname);
    cout<<"Enter your class: ";
    getline(cin,clas);
	
	cout<<"Enter your class2: ";
    getline(cin,clas2);

    file<<"Student Data";
    file<<"Student name: "<<name<<endl<<"Father's name: "<<fname<<endl<<"Class: "<<clas<<endl<<"class2: "<<clas2;

    file.close();
    cout<<" Student data written to file successfully.";
    return 0;

    

}