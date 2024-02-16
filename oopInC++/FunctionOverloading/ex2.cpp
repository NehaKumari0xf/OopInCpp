/* Create a type for storing fraction number*/
#include<iostream>
using namespace std;
class FractionNumber
{
    private:
    int num;
    int dnum;
    public:
    // setter function
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
        if(dnum!=0)
        dnum=d;
        else dnum=1;
    }
    // getter function
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
    void show(char *name)
    {
        cout<<name<<"="<<num<<"/"<<dnum;
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
    cout<<endl;
    n2.show();
    cout<<endl;
    FractionNumber n3;
    cout<<endl;
    n3.set(18,3);
    cout<<"n3=";
    n3.show();
    // to change the value of denominator then
    n3.setDnum(14);
    cout<<endl;
    cout<<"n3=";
    n3.show();
    FractionNumber n4;
    n4.set(43,17);
    cout<<endl;
    n4.show();
    cout<<endl;
    cout<<"n4 =";
    n4.show();
    cout<<endl<<endl<<endl;
    n4.show("n4");
    return 0;
}
