#include<iostream>
using namespace std;
//create a function that will accept two integer umber and return the largest number
int  largest(int a,int b)
{
    if(a>b)
    return a;
    else 
    return b;
}
int largestOf3(int a,int b,int c)
{
    if(a>b&&a>c)
    return a;
    else if(b>c)
    return b;
    else
    return c;
}
int largestOf4(int a,int b,int c,int d)
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
int largestOf5(int a,int b,int c,int d,int e)
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
    int a,b,c,d;
    a=10;
    b=18;
    c=largest(a,b);


}