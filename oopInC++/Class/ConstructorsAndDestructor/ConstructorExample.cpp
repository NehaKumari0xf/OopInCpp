#include<iostream>
using namespace std;
class Demo
{
	int x;
	int y;
	public:
		//default constructor
		Demo()
		{
			cout<<endl<<"Constructor called and object created.";
		}
	
};
int main()
{
	Demo ob1,ob2,ob3;
	return 0;
}