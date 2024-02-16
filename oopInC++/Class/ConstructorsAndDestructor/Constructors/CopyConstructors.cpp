/* Copy Constructor: It is a type of constructor that is called 
when and object is initialized with another object

It takes self type object reference as argument.

Every class must have a copy constructor.

If we don't create copy constructor compiler automatically creates a copy 
constructor in class.


*/
#include<iostream>
#include<cstring>
using namespace std;

class Student
{
    private :
    char name[30];
    int roll;
    public:
    Student()
    {
        strcpy(name,"no-name");
        roll=0;
        cout<<"\nstudent created using default constructor";
    }
    Student(char *n,int r=0)
    {
        strcpy(name,n);
        roll=r;
        cout<<"\nstudent created using parametrized constructor";
    }
    //copy constructor
    Student(Student &o)
    {
        strcpy(name,o.name);
        roll=o.roll;
        cout<<"\nstudent created using copy constructor";
    }

};

void demo(Student s)
{
	cout<<"\nI am demo";
}
void demo1(Student &s)
{
	cout<<"\n I am demo1";
}
int main()
{
    Student rahul;
    Student neha("neha");
    Student anshu("Anshu",45);
    Student canshu(anshu);//Student(Student &o=anshu);
    Student anshu1=anshu;
    
    demo(rahul);//demo(Student s=rahul)
    demo(neha);//demo(Student s=neha)
    demo1(anshu);//demo1(Student &s=anshu);
    
    return 0;
}