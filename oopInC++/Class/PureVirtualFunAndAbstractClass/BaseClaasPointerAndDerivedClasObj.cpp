/*
Base class pointer can point to its any derived class object (but its vice-versa is not possible)-
Base class ke pointer me iske kisi v derived class ke object ka address rakha ja sakta hai.
ex:
A<-B<-C<-D

Class A ke pointer mein class B,C aur D ke object ka address rakha ja sakta hai.
Class B ke pointer mein class C aur D ke object ka address rakha ja sakta hai.

Lekin class B ke pointer mein class A ke object ka address nahi rakha ja sakta.

Agar kisi base class ke pointer mein kisi derived class ke object ka address rakah hua ho
to base class pointer ki sahayat se kewal unhi member(s) ko call kiya ja sakta hai
jo base class ka member hai.Derived class ke personal members ko base class pointer ki sahayata se nahi access kiya ja sakata.

*/
#include<iostream>
using namespace std;
class Shape
{
	string name;
	public:
		Shape(string name="Shape")
		{
			this->name=name;
		}
		void yourself()
		{
			cout<<"\nHi! I am "<<name;
		}
		void setName(string name)
		{
			this->name=name;
		}
		string getName()
		{
			return name;
		}
		virtual void printArea()=0;//Pure virtual Function->Virtual function without defination
/* The class having minimum one pure virtual function is called Abstract class.
Abstract class can't be instantiated-> Abstract class ka object nahi banaya ja sakta. kyonki yaha adhura hota hai.

Abstract class ka pointer ya reference banaya ja sakata hai.

Abstract class ka use hamesa Base class ke taur pe hota hai.

jo class abstract class ko inherit kara hai usme abstract class ke pure virtual function ko
override karna anivarya hota hai.
*/

};
class Rectangle:public Shape
{
	float length;
	float breadth;
	public:
		Rectangle(float l=0,float b=0):Shape("Rectange")
		{
			length=l;
			breadth=b;
		}
		void setLength(float l)
		{
			length=l;
		}
		void setBreadth(float b)
		{
			breadth=b;
		}
		float getBreadth()
		{
			return breadth;
		}
		float getLength()
		{
			return length;
		}
		//must override the pure virtual function og shape
		void printArea()
		{
			cout<<"My Area is:"<<length*breadth;
		}
		
};

int main()
{
	//Shape s;// Shape is abstract class
	Rectangle rect(10,20);
	
//	s.yourself();
	rect.yourself();
	
	Shape  *sp;//Correct
	/*sp=&s;
	sp->yourself();
	sp->printArea();*/
	
	sp=&rect;
	sp->yourself();
	sp->printArea();
	
	
	
}



