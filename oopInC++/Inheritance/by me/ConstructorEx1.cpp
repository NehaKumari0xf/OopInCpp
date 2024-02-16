#include<iostream>
using namespace std;

class A{
        public:
        A()
        {
            cout<<"\nDefault constructor of A";
        }
};
class B:public A{
    public:
    B()
    {
        cout<<"\nDefault constructor of B";
    }
};

class C:public B{
    public:
    C()
    {
        cout<<"\nDefault constructor of C";
    }
};

int main()
{
	cout<<"\nCreating object of class A";
    A dc;
    cout<<"\n\nCreating object of class B";
    B bdc;
    cout<<"\n\nCreating object of class C";
    C cdc;
    return 0;
}