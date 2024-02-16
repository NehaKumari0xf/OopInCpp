//Early Binding Vs Late Binding
//Static Binding vs Dynamic Binding
//Compile time Binding Vs Runtime Binding
//Function Overloading and Operator Overloading	vs Function Overriding
//Compile time Polymorphism vs Runtime polymorphism
#include<iostream>
using namespace std;
void printInfo(string name)
{
	cout<<endl<<"Hello! "<<name;
}
void printInfo(string name,char gender)
{
	cout<<endl<<"Hello! ";
	if(gender=='M'||gender=='m')
	cout<<"Mr. ";
	else
	cout<<"Miss. ";
	cout<<name;
}

class Person
{
	protected:
		string name;
	public:
		Person(string name="noname")
		{
			this->name=name;
		}
		void setName(string name)
		{
			this->name=name;
		}
		string getName()
		{
			return name;
		}
		virtual void show()
		{
			cout<<endl<<"Hello! "<<name;
		}
};
class Male:public Person
{
	public:
		Male(string name):Person(name)
		{
			
		}
		//Overriding show()
		void show()
		{
			cout<<endl<<"Hello! Mr. "<<name;
		}
		
};
class Female:public Person
{
	public:
		Female(string name):Person(name)
		{
			
		}
		//override show()
		void show()
		{
			cout<<endl<<"Hello! Miss "<<name;
		}
};
int main()
{
	printInfo("Kajal Kumari");//binded with printInfo(string) at compile time 
	printInfo("Neha Kumari",'f');//binded with printInfo(string,char) at compile time
	//printInfo();
	Person p("Rahul Kumar");
	Male m("Rahul Raj");
	Female f("Anshu Mala");
	p.show();
	m.show();
	f.show();
	
	cout<<endl<<endl;	
	Person *pp;
	pp=&p;
	pp->show();//will call Person's show()->Decision is taken at run time->Late binding
	pp=&m;
	pp->show();//will call Male's show()->Decision is taken at run time
	pp=&f;
	pp->show();//will call Female's show()->Decision is taken at run time
	 
}

