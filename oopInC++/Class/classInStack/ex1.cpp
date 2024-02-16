//Stack Class Example
#include<iostream>
#include<cmath>
using namespace std;
class MyIntStack
{
	private:
		int *stack;
		int capacity;
		int tos;
	public:
		MyIntStack()
		{
			capacity=10;
			stack=new int[capacity];
			tos=-1;
		}
		MyIntStack(int cap)
		{
			cap=abs(cap);
			
			if(cap==0)
			cap=10;
			
			capacity=cap;
			stack=new int[capacity];
			tos=-1;
		}
		int getCapacity()
		{
			return capacity;
		}
		
		int push(int data)
		{
			if(capacity-1==tos)
			return 0;
			
			tos++;
			stack[tos]=data;
			return 1;
		}
		int pop(int &data)
		{
			if(tos==-1)
			return 0;
			
			data=stack[tos];
			tos--;
			return 1;
		}
		void peep()
		{
			if(tos==-1)
			cout<<"Stack is empty.";
			
			for(int i=0;i<=tos;i++)
			{
				cout<<stack[i]<<",";
			}
			
		}
		
		
};
int main()
{
	MyIntStack pass,fail(5),pass1(-20),pass2(0);
	cout<<endl<<"Pass Capacity="<<pass.getCapacity();
	cout<<endl<<"Fail Capacity="<<fail.getCapacity();
	cout<<endl<<"pass1 Capacity="<<pass1.getCapacity();
	cout<<endl<<"pass2 Capacity="<<pass2.getCapacity();
	
	cout<<"\nPass=";
	pass.peep();
	cout<<"\npass1=";
	pass1.peep();
	cout<<"\npass2=";
	pass2.peep();
	cout<<"\nfail=";
	fail.peep();
	
	pass.push(20);
	pass.push(30);
	pass.push(40);
	
	pass1.push(90);
	pass1.push(45);
	pass1.push(88);
	pass1.push(76);
	pass1.push(15);
	
	pass2.push(12);
	pass2.push(45);
	
	cout<<"\nPass=";
	pass.peep();
	cout<<"\npass1=";
	pass1.peep();
	cout<<"\npass2=";
	pass2.peep();
	cout<<"\nfail=";
	fail.peep();
	
	fail.push(1);
	fail.push(2);
	fail.push(3);
	fail.push(4);
	fail.push(5);
	fail.push(6);
	fail.push(10);
	
	cout<<"\nfail=";
	fail.peep();
	
	int data;
	fail.pop(data);
	
}
