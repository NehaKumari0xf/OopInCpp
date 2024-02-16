/*
Inheritance Syntax
--------------------------
class DerivedClassName:[AccessSpecifier] BaseClassName
{
//class body
};

When a class inherits class,All members of BaseClass is inherited by 
derived class.

class A
{
private :
int x;
public:
int y;
};

class B : public A
{
private :
int z;
public:
int u;
};

In above example class A has two members(x,y) and class B has 4 members (x,y,z,u)

class Dosa: private Rice
{
}
class PawBhaji:private Paw,private Bhaji,private Butter
{
}

*****************************************
Private member of base classe is not accessible in derived class (But available in derived class)
**********************************************
*/
#include<iostream>
using namespace std;
class A
{
	private:
		int x;
	public:
		int y;
		void showA()
		{
			cout<<"x="<<x<<"y="<<y;
		}		
};
class B:public A
{
	private:
		int z;
	public:
		void showB()
		{
			cout<<"x="<<x;//Incorrect
			cout<<"\ny="<<y;//correct
			cout<<"\nz="<<z;//correct
			
		}
};
/*
private: Only class member
protected: Class member and derived class member
public: any where
*/

class A
{
	private:
		int a;
	protected:
		int b;
	public:
		int c;
		
};
class B: public A
{
	private:
		int d:
	public:
		//class B has total 4 members(a,b,c and d)
		void show()
		{
			cout<<"a="<<a;//Error
			cout<<"b="<<b;//correct
			cout<<"c="<<c;//correct
			cout<<"d="<<d;//correct
			
		}
	
};
