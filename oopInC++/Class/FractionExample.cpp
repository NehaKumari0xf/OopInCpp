/* Create a type for storing fraction number*/
#include<iostream>
using namespace std;
class FractionNumber
{
    private:
    int num;
    int dnum;
    public:
    void setNum(int n)
    {
        num=n;
    }
    void setDnum(int d)
    {
        if(d!=0)
        dnum=d;
        else
        dnum=1;
    }
    void set(int n,int d)
    {
        num=n;
        if(d!=0)
        dnum=d;
        else
        dnum=1;
    }
    int getNum()
    {
        return num;
    }
    int getdNum()
    {
        return dnum;
    }
    void show()
    {
        cout<<num<<"/"<<dnum;
    }

};

int main()
{
    FractionNumber n1,n2;
    n1.setNum(22);
    n1.setDnum(7);
    n2.setNum(17);
    n2.setDnum(0);
    cout<<"n1="<<n1.getNum()<<"/"<<n1.getdNum();
    cout<<"n2="<<n2.getNum()<<"/"<<n2.getdNum();

    cout<<endl<<endl;//endl :- It is a manipulator used for inserts a new line and flushes the output stream.
    cout<<"n1=";
    n1.show();
    cout<<"n2=";
    n2.show();

    FractionNumber n3;
    n3.set(18,3);
    cout<<endl<<"n3=";
    n3.show();
    //set 17 in denum of n3
    n3.setDnum(17);
    cout<<endl<<"n3=";
    n3.show();

    FractionNumber n4;
    n4.set(18,0);
    cout<<endl<<"n4=";
    n4.show();
    
    return 0;


}
