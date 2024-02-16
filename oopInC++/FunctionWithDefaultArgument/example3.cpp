#include<iostream>
using namespace std;
long power(int b,int p=2)
{
	long pwr=1;
	for(int i=1;i<=p;i++)	
	pwr*=b;
	return pwr;
}
int main()
{
	cout<<"\n10^3="<<power(10,3);
	cout<<"\n2^5="<<power(2,5);
	cout<<"\n9^2="<<power(9,2);
	cout<<"\n7^2="<<power(7);
	cout<<"\n11^2="<<power(11);
	
	return 0;
}