//cpp proram to add two float number using dynamic memory allocation
#include<stdio.h>
#include<malloc.h>

int main()
{
	float *n1,*n2,*n3;
	//allocate memory for 1st value
	n1=(float*)malloc(sizeof(float));
	//allocate memory for 2nd value
	n2=(float*)malloc(sizeof(float));
	//allocate memory for 3rd value
	n3=(float*)malloc(sizeof(float));
	printf("Enter 1st number:");
	scanf("%f",n1);
	printf("Enter 2nd number:");
	scanf("%f",n2);
	//perforn addition
	*n3=*n1+*n2;
	//result
	printf("\n%g+%g=%g",*n1,*n2,*n3);
	//release all allocated memory
	free(n1);
	free(n2);
	free(n3);
	return 0;
}