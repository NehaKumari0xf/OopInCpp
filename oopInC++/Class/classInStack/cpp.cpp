// stack class Example
#include<iostream>
#include<cmath>
using namespace std;

class MyIntStack
{
    private:
        int *stack;//pointer stack store base address
        int capacity;
        int tos;
    public:
        // default constructor
        MyIntStack()
        {
            capacity=10;
            stack=new int[capacity];
            tos=-1;
        }
        // parameterised constructor
        MyIntStack(int cap)
        {
            cap=abs(cap);

            if(cap==0)
            cap=10;

            capacity=cap;
            stack=new int[capacity];
            tos=-1;
        }
    int getCapacity()    
    {
        return capacity;
    }

    int push(int data)
    {
        if(capacity-1==tos)
        return 0;

        tos++;
        stack[tos]=data;
        return 1;
    }

    int pop(int &data)
    {
        if(tos==-1)
        {
            return 0;
        }
        data=stack[tos--];

    }

    int pop()
    {
        if(tos==-1)
        {
            return 0;
        }
        tos--;
    }

    void peep()
    {
        if(tos==-1)
        {
            cout<<"stack is empty";
            return;
        }

        for(int i=0;i<=tos;i++)
        {
            cout<<stack[i]<<",";
        }
    }

    void peep(char *name)
    {
        if(tos==-1)
        {
            cout<<"\nStack '"<< name<<"' is empty";
            return;
        }
        cout<<"\nStack '"<< name <<"' status is as: ";
        for(int i=0;i<=tos;i++)
        {
            cout<<stack[i]<<",";
        }
    }
    void empty()
    {
        tos=-1;
    }
};

int main()
{
   MyIntStack st1, st2(5),st3(12);
   st1.push(23);
   st1.push(12);
   st1.push(33);

//    stack 2
    st2.push(878);
    st2.push(67);

    // stack 3

    st3.push(78);
    st3.push(66);
    st3.push(99);

    // show stack1
    st1.peep("st1");
    st2.peep("st2");
    st3.peep("st3");

    st1.pop();
    st2.pop();
    st3.pop();

    // show stack1
    st1.peep("st1");
    st2.peep("st2");
    st3.peep("st3");

    st1.push(78);
    st1.push(99);

    st2.push(55);
    st2.push(43);
    st2.push(78);

    st3.push(77);
    st3.push(99);
    st3.push(66);

    // show stack1
    st1.peep("st1");
    st2.peep("st2");
    st3.peep("st3");

    // empty stack1
    while(st1.pop());
    
    st2.empty();

    st3.empty();

    // show stack1
    st1.peep("st1");
    st2.peep("st2");
    st3.peep("st3");
}
