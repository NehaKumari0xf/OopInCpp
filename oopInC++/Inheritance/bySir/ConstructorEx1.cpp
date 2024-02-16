/*
Constructors in Inheritance
------------------------------------
Constructors are called in order of derivation
------------------------------------------------
class A
{
};
class B:public A
{
};
class C:public B
{
};

If we craete an object of class  A, then only A class constructor will be called

If we create an object Of class B, then first class A constructor will be called then class B constructor will be called

If we create an object of class C, then first class A constructor, then class b constructor and at last class C constructor will be called

*/
#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"\nClass A constructor called!";
		}
		A(int x)
		{
			cout<<"\nClass A's parametrized constructor called!";
		}
};

class B:public A
{
	public:
	B()
	{
		cout<<"\nClass B constructor called!";	
	}	
};

class C:public B
{
	public:
		C()
		{
			cout<<"\nClass C constructor called!";
		}
};

int main()
{
	cout<<"\nCreating class A object:";
	A a;
	
	cout<<"\n\nCreating class B object:";
	B b;
	
	cout<<"\n\nCreating class C object:";
	C c;
	
	cout<<"\n\nCreating class A object using parametrized constructor:";
	A ap(10);
	
	
	return 0;
}

/* Calling specific constructor of base class using derived class*/