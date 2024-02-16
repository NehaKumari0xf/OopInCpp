/*
write a C++ program that will read name,fathers name,mothers name,address, class, roll and marks
of 5 subject and print result.
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name,fname,mname,address,grade;
    char subjects[5];
	int roll,clas,maths,eng,hindi,sci,sst;
	
	cout<<"Enter your name :";
	getline(cin,name);
	cout<<"Enter your mother's name :";
	getline(cin,mname);
	cout<<"Enter your father's name :";
	getline(cin,mname);
	cout<<"Enter your address :";
	getline(cin,address);
	cout<<"\nEnter your roll_no:";
	cin>>roll;
	cout<<"\nEnter your class:";
	cin>>clas;
	cout<<"Enter your marks :";
	cout<<"\nEnter the marks of maths subject:";
	cin>>maths;
	cout<<"Enter the marks of hindi subject:";
	cin>>hindi;
	cout<<"Enter the marks of engish subject:";
	cin>>eng;
	cout<<"Enter the marks of science subject:";
	cin>>sci;
	cout<<"Enter the marks of s.st subject:";
	cin>>sst;
		
	float tmarks=maths+eng+hindi+sci+sst;
	float per=tmarks/5;
	if(per>=60)
	grade="First";
	if(per>=50)
	grade="Second";
	if(per>=40)
	grade="Third";
	else
	grade="Fail";
	
	cout<<"\n----------------------------";
	cout<<"\n\n\tResult";
	cout<<"\n----------------------------";
	cout<<"\nName: "<<name;
	cout<<"\nMother's name: "<<mname;
	cout<<"\nFather's name: "<<fname;
	cout<<"\nRoll_no: "<<roll;
	cout<<"\nAddress: "<<address;
	cout<<"\nClass: "<<clas;
	cout<<"\nMarks of all subject:-";
	sprintf(subjects, "\nMaths: %d",maths);
		cout<<subjects;
	sprintf(subjects, "\nEnglish: %d",eng);
		cout<<subjects;
	sprintf(subjects, "\nHindi: %d",hindi);
		cout<<subjects;
	sprintf(subjects, "\nScience: %d",sci);
		cout<<subjects;
	sprintf(subjects, "\nSocial Science: %d",sst);
		cout<<subjects;
	sprintf(subjects, "\nTotal Marks and Percentage of all subjects is: %f and %f",tmarks,per);
	cout<<subjects;
	cout<<"\nGrade: "<<grade;
	return 0;
}