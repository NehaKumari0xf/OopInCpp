#include<iostream>
using namespace std;
class A
{
	private:
		int a;
	protected:
		int b;
	public:
		int c;
};
class B:private A
{
	protected:
		int d;
	public:
		void show()
		{
			//cout<<"\n a="<<a;//Error:Trying to access private member of base class in derived class
			cout<<"\n b="<<b;
			cout<<"\n c="<<c;
			cout<<"\n d="<<d;
			
		}
};

class C:public B
{
	private:
		int e;
	public:
		void ShowC()
		{
			//a is not accessible here
			//b is also not accessible here bcz b is private in B
			//cout<<"b="<<b;
			//c is also not accessible here
			cout<<"c="<<c;
		}
};
int main()
{
	A a;
	B b;
	//a.a=10;//Error: a is private member
	//a.b=12;//Error: b is protected memeber
	a.c=10;//Correct
	
	//b.a=10;//Error:
	//b.b=10;//Error
	//b.c=10;//Error
	C obc;
	
	
}


