/*
Early Binding- Function Overloading,Operator Overloading
Late binding- Function Overriding
*/
#include<iostream>
using namespace std;
void fun()
{
	printf("I am fun version 1");
	return ;
}
void fun(int i)
{
	printf("I am fun version 2");
	return ;
}

class Person
{
	public:
	    virtual void show()
		{
			cout<<endl<<"I am a person";
		}
};
class EducatedPerson:public Person
{
	public:
		//Override show()
		void show()
		{
			cout<<endl<<"I am educated person";
		}
};
class Employee:public EducatedPerson
{
	public:
		
	//Override show()
	void show()
	{
		cout<<endl<<"I am an Employee";	
	}	
};
int main()
{
	fun();//which fun will be called? There are two fun. This decision is taken at the time of comilation so, it is called early binding

	Person p;
	EducatedPerson ep;
	Employee e;
	
	p.show();//Early Binding
	ep.show();//Early Binding
	e.show();//Early Binding
	
	Person *pp;
	pp=&p;
	pp->show();//Late Binding:which show() will be called, decided at the time of code execution
	pp=&ep;
	pp->show();//Late Binding
	pp=&e;
	pp->show();//Late Binding	
		  
}
/*Pure virual function
Abstract class/Concrete class
*/

