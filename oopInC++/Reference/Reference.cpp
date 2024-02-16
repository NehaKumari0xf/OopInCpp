/*Reference
Reference is synonym of variable
*/
#include<iostream>
using namespace std;
int main()
{
	int i=10;
	int *p=&i;//here p is a pointer pointing to i
	int &j=i;//jere j is a synonym of i
	
	cout<<"Value of i"
		<<endl<<"Using i="<<i
		<<endl<<"using p="<<*p
		<<endl<<"using j="<<j;
		
		cout<<endl<<endl<<"Changeing value of i using i";
		i=30;
		cout<<"Value of i"
		<<endl<<"Using i="<<i
		<<endl<<"using p="<<*p
		<<endl<<"using j="<<j;
		
		cout<<endl<<endl<<"Changeing value of i using p";
		*p=50;
		cout<<endl<<"Value of i"
		<<endl<<"Using i="<<i
		<<endl<<"using p="<<*p
		<<endl<<"using j="<<j;
		
		cout<<endl<<endl<<"Changeing value of i using j";
			j=100;
		cout<<endl<<"Value of i"
		<<endl<<"Using i="<<i
		<<endl<<"using p="<<*p
		<<endl<<"using j="<<j;
		
		int x=20;
		int &y=x;//y is synonym of x
		int &z=y;//z is synonym of x
		
		int neha=70;
		int &anshu=neha;
		int &kajal=anshu;
		int &sheetal=kajal;
		
		//const
		volatile int l=30;//may or may not initialized
		const int k=10;//must be initialized
		//we can change the value of l anytime
		l=50;
		//we can't change the value of k
		//k=12;//Error
		
		int d=10;
		int &e=d;//here e is volatile reference of d,
		// using e we can perform read write operation 
		//on variable
		cout<<endl<<"Value of d="<<e;
		e=50;//valid
		cout<<endl<<"value of d="<<d;
		
		const int &f=d;//here f is synonym of d
		//but f is read only synonym
		cout<<endl<<"uavle of d="<<f<<"  using const reference";
		//f=70;//error
		
		//creating reference of const variable
		const int h=30;
		const int &q=h;
		
		
		return 0;
}
