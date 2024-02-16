/*Function with default argument*/
#include<iostream>
using namespace std;
void neha(int a,int b)
{
    cout<<"\n I am Neha. Yoy have sent me "<<a<<" and "<<b;
}
void anshu(int a,int b)
{
    cout<<"\n I am Anshu. You have sent me "<<a<<" and "<<b;

}
void sheetal(int a,int b)
{
    cout<<"\nI am Sheetal. You have sent me "<<a<<" and "<<b;
}
int main()
{
    neha(10,20);
    anshu(56,85);
    sheetal(90,56);
    return 0;
}
