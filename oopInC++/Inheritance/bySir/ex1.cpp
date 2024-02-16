#include<iostream>
#include<string>
using namespace std;
class Person
{
	protected:
		string name;
		char gender;
	public:
		Person()
		{
			name="";
			gender='n';
		}
		Person(string name,char gender)
		{
			this->name=name;
			
			this->gender=gender;
		}
		void setName(string name)
		{
			this->name=name;
		}
		void setGender(char gender)
		{
			this->gender=gender;
		}
		void showPerson()
		{
			cout<<"\nPerson's Name="<<name<<" and gender="<<gender;
		}
};

class Student
{
	private:
		string name;
		char gender;
		int roll;
		int marks;
	public:
		Student()
		{
			name="";
			gender='n';
			roll=0;
			marks=0;
		}
		Student(string name,char gender='m',int roll=0,int marks=0)
		{
			this->name=name;
			this->gender=gender;
			this->roll=roll;
			this->marks=marks;
		}
		void setName(string name)
		{
			this->name=name;
		}
		void setGender(char gender)
		{
			this->gender=gender;
		}
		void setRoll(int roll)
		{
			this->roll=roll;
		}
		void setMarks(int marks)
		{
			this->marks=marks;
		}
		void showStudent()
		{
			cout<<"\n Student's name="<<name<<", gender="<<gender<<", roll="<<roll<<" and marks="<<marks;
		}
};

class NewStudent:public Person
{
	private:
		int roll;
		int marks;
	public:
		NewStudent(int roll=0,int marks=0)
		{
			this->roll=roll;
			this->marks=marks;
		}
		void setRoll(int roll)
		{
			this->roll=roll;
		}
		void setMarks(int marks)
		{
			this->marks=marks;
		}
		void showNewStudent()
		{
			cout<<"\nNew Student's name="<<name<<", gender="<<gender<<", roll="<<roll<<" and marks="<<marks;		
		}

};
int main()
{
	Person p1("Anshu Mala",'F');
	p1.showPerson();
	Person p2;
	p2.showPerson();
	p2.setName("Kajal Kumari");
	p2.setGender('F');
	p2.showPerson();
	
	Student s1("Rahul Kumar",'m',23,789);
	Student s2;
	
	s1.showStudent();
	s2.showStudent();
	
	Student st1;
	NewStudent nst1;
	
	st1.showStudent();
	nst1.showNewStudent();
	
	
	st1.setName("Rakesh Raj");
	nst1.setName("Manish Kumar");
	st1.showStudent();
	nst1.showNewStudent();
	
	st1.setGender('M');
	nst1.setGender('M');
	
	st1.showStudent();
	nst1.showNewStudent();
	
	
	
	return 0;
}
/*
Inheritance Syntax:
class DerivedClassName:[accessSpecifier] BaseClassName[,[accessSpecifier] BAseClassName,...]
{
//class Body
};

Note: [] is not part of syntax. it represents optional data
ex:
class B:public A
{
//class body
};
class B is inheriting class A
B- Derived Class
A- Base class

class Vehicle:public Wheel,public Machine
{
//class body
};

here Vehicle is Derived class 
Wheel and Machine are Base Class (Multiple Inheritance)

In Java
--------
class SubclassName extends SuperclassName
{
//class body;
}
ex:
class B extends A
{
//class body
}
*/
