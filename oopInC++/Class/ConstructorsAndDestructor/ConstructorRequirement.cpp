#include<iostream>
using namespace std;
class FractionNumber{
	private:
	int num;
	int dnum;
	public:
		//constructor->Default Constructor
		FractionNumber()
		{
			num=0;
			dnum=1;
		}
		void setVal(int n,int d)
		{
			num=n;
			if(d==0)
			dnum=1;
			else
			dnum=d;
		}
		void show()
		{
			cout<<num<<"/"<<dnum;
		}
	
};
struct Point
{
	int x;
	int y;
};
int main()
{
	int x;
	x=10;
	int y=0;
	y=10;
	int z[5]={23,56,2,34,5};
	struct Point p1={12,7};	
	
	FractionNumber ob1;
	ob1.setVal(22,7);
	FractionNumber ob2;
	ob2.setVal(18,0);	
	cout<<"Ob1=";
	ob1.show();
	cout<<endl<<"ob2=";
	ob2.show();
	FractionNumber ob3;//={1,1};//Error
	cout<<endl<<"ob3=";
	ob3.show();
	FractionNumber ob4;
	cout<<endl<<"ob4=";
	ob4.show();
	return 0;
}