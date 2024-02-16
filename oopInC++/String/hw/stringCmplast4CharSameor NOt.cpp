/*Write a cpp program that will accept any two strings and print both string's
last 3 characters are the same or not.*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str[2];
	cout<<"Enter ant two names:"<<endl;
    for(int i=0; i<2; i++){
        cout<<i+1<<"Name :";
        getline(cin, str[i]);
    }
    
	//compare both string
    for(int i=0;i<2;i++){
	if(str[i].length()>=3 && str[i].compare(str[i].length()-3,3,str[i])==0)
	cout<<"\nlast 3 charracter of given string are same.";
	else
	cout<<"\nSorry!! ,last 3 charracter are not same in given string.";
    }
	return 0;
}
