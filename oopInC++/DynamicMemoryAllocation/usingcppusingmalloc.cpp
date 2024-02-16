//cpp proram to add two float number using dynamic memory allocation
#include<iostream>
#include<malloc.h>
using namespace std;
int main()
{
	float *n1,*n2,*n3;
	//allocate memory for 1st value
	n1=(float*)malloc(sizeof(float));
	//allocate memory for 2nd value
	n2=(float*)malloc(sizeof(float));
	//allocate memory for 3rd value
	n3=(float*)malloc(sizeof(float));
	cout<<"Enter 1st number:";
	cin>>*n1;
	cout<<"Enter 2nd number:";
	cin>>*n2;
	//perforn addition
	*n3=*n1+*n2;
	//result
	cout<<endl<<*n1<<"+"<<*n2<<"="<<*n3;
	//release all allocated memory
	free(n1);
	free(n2);
	free(n3);
	return 0;
}