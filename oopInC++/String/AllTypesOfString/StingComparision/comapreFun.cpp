/*C++ program to accept 5 names and print all names in ascending order*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string names[5],temp;
	int i,j;
	//accept names
	for(i=0;i<5;i++)
	{
		cout<<"Enter name "<<(i+1)<<":";
		getline(cin,names[i]);
	}
	
	//sort list-Linear sort
	for(i=0;i<5-1;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(names[i].compare(names[j])<0)
			{
				//swap ith name with jth name
				temp=names[i];
				names[i]=names[j];
				names[j]=temp;
			}
		}
	}
	
	//print all names
	cout<<"All Entered names are:";
	for(i=0;i<5;i++)
	cout<<endl<<names[i];
	
	return 0;
}
