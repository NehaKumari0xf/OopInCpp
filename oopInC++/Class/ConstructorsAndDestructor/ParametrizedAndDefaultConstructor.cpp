/*
Creating Object
----------------------
using default constructor
------------------------
ClassName objectName; It will call default constructor for creating object

using parameterized constructor
------------------------------
ClassName objectName(argument);
or
ClassName objectName=ClassName(argument);

*/
#include<iostream>
using namespace std;
class Demo
{
	private:
		int x;
		int y;
	public:
		//default constructor
		Demo()
		{
			x=0;
			y=0;
			cout<<"\nDefault constructor Called:Object Created and initioalized with default value.";
		}
		//parameterized constructor
		Demo(int a,int b)
		{
			x=a;
			y=b;
			cout<<"\nParameterized Constructor called:Object created and initialized";
		}
		void show()
		{
			cout<<"x="<<x<<",y="<<y;
		}
		
};
int main()
{
	//create object of class Demo
	Demo ob1;
	cout<<endl<<"ob1=";
	ob1.show();
	Demo ob2(10,20);
	cout<<endl<<"ob2=";
	ob2.show();
	Demo ob3(40,10);
	cout<<endl<<"ob3=";
	ob3.show();
	Demo ob4=Demo(50,20);
	cout<<endl<<"ob4=";
	ob4.show();
	Demo ob5;
	Demo ob6=Demo();
	
}