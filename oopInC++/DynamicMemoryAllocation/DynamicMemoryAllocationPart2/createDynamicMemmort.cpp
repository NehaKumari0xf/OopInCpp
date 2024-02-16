/*
In C++ we can create dynamic array.
Syntax:
creation:
ptrName=new typeName[size];//size should be an integer variable or literal

Deletion:
delete[] ptrName;

Note: In C++ dynamic array can't be initialized.

*/
/* Write a C program that will read n numbers from user 
and print the all entered number,sum and average of all numbers.*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    int *list;
    int i,sum;
    float avg;

    //int list[10];//static array
    cout<<"How many number you want to enter:";
    cin>>n;

    n=abs(n);

    if(n==0)
    {
        cout<<"Sorry! number can't be zero";
        return 0;
    }

    //create array
    list=new int[n];

    if(list==NULL)
    {
        cout<<"\n Sorry! unable to create list.";
        return 0;
    }

    for(i=0;i<n;i++)
    {
        cout<<"Enter number "<<(i+1)<<":";
        cin>>list[i];
    }

    //find sum
    sum=0;
    for(i=0;i<n;i++)   sum+=list[i];

    avg=(float)sum/n;

    //display all entered number
    cout<<"All entered numbers are :";
    for(i=0;i<n;i++)
    {
        cout<<list[i];
        //print seperator
        if(i<n-2)
        cout<<", ";
        else if(i==n-2)
        cout<<" and ";
    }

    cout<<"\n sum="<<sum<<", Average="<<avg;

    //delete dynamic array
    delete[] list;
    return 0;





}