/*Calling specific constructor of base class using derived class*/
#include<iostream>
#include<string>
using namespace std;
class Person
{
	private:
		string name;
		char gender;
		int age;
	public:
		Person()
		{
			name="";
			gender='n';
			age=0;
			cout<<"\n Person's default constructor called.";
		}
		Person(string name)
		{
			this->name=name;
			gender='n';
			age=0;
			cout<<"\n Person's one argument constructor called.";
		}
		Person(string name,char gender)
		{
			this->name=name;
			this->gender=gender;
			age=0;
			cout<<"\n Person's two argument constructor called.";
		}
		Person(string name,char gender,int age)
		{
			this->name=name;
			this->gender=gender;
			this->age=age;
			cout<<"\n Person's three argument constructor called.";
		}
		void setName(string name)
		{
			this->name=name;
		}
		void setGender(char gender)
		{
			this->gender=gender;
		}
		void setAge(int age)
		{
			this->age=age;
		}
		string getName()
		{
			return name;
		}
		char getGender()
		{
			return gender;
		}
		int getAge()
		{
			return age;
		}
		void showPerson()
		{
			cout<<endl<<"Name:"<<name<<", Gender:"<<gender<<", Age:"<<age;
		}
};
class Student:public Person
{
	private:
		int roll;
	public:
		Student()
		{
			roll=0;
			cout<<"\n Student's default constructor called";
		}
		Student(int roll)
		{
			this->roll=roll;
			cout<<"\n student's one argument constructor called";
		}
		Student(string name):Person(name)
		{
			
			roll=0;
			cout<<"\n Student's one string argument constructor called";
		}
		void showStudent()
		{
			showPerson();
			cout<<", Roll="<<roll;
		}
	
	
};

int main()
{
	Person p1;
	p1.showPerson();
	
	Person p2("Rahul Kumar");
	p2.showPerson();
	
	Person p3("Neha Kumari",'F',20);
	p3.showPerson();
	
	p1.setName("Rahul raj");
	p1.setGender('M');
	p1.setAge(21);
	p1.showPerson();
	
	Student s1;
	s1.showStudent();
	
	Student s2(12);
	s2.showStudent();
	
	Student s3("Neha");
	s3.showStudent();
	
}
