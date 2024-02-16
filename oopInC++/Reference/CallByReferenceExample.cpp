//Call By Reference Example
#include<iostream>
using namespace std;
void neha(const int &n)
{
	cout<<"\n Neha, n="<<n;
	//n+=5;
}
void anshu(int n)
{
	cout<<"\n Anshu, n="<<n;
	n-=10;	
}
int main()
{
	int a=10;
	cout<<"\n Main, a="<<a;
	neha(a);
	cout<<"\n Main, a="<<a;
	anshu(a);
	cout<<"\n Main, a="<<a;
	return 0;
	
}
