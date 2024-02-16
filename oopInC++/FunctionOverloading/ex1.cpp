#include<iostream>
using namespace std;
//create a function that will accept two integer value and returns larger value
int largest(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
//create a function that will accept three integer value and returns largest value
int largest(int a,int b,int c)
{
    if(a>b&&a>c)
    return a;
    else if(b>c)
    return b;
    else
    return c;
}
//create a function that will accept four integer value and returns largest value
int largest(int a,int b,int c,int d)
{
    if(a>b&&a>c&&a>d)
    return a;
    else if(b>c&&b>d)
    return b;
    else if(c>d)
    return c;
    else
    return d;
}
//create a funtion that will accept 5 integer number and  return the largest number
int largest(int a,int b,int c,int d,int e)
{
    if(a>b&&a>c&&a>d&&a>e)
    return a;
    else if(b>c&&b>d&&b>e)
    return b;
    else if(c>d&&c>e)
    return c;
    else if(d>e)
    return d;
    else
    return e;
}
int main()
{
    cout<<endl<<"Largest of 2 and 3 is "<<largest(2,3);
    cout<<endl<<"Largest of 1,2 and 3 is "<<largest(1,2,3);
    cout<<endl<<"Largest of 10,20,30 and 40 is "<<largest(10,20,30,40);
    cout<<endl<<"largest of 70,60,50,30, and 20 is "<<largest(70,60,50,30,20);
    return 0;
}