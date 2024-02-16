/* Create a cpp program in which create a type for storing points. Create 2 variable of point type and store value in that variable*/
/* Create a type to store fraction number*/
#include<iostream>
using namespace std;
//create new type for point
struct Point
{
    public:
    int x;
    int y;
};
class FractionNumber
{
    public:
    int num;
    int dnum;
};
int main()
{
    //variable declaration
    // datatype varName;
    struct Point p1,p2;
    p1.x=10;
    p1.y=48;
    p2.x=17;
    p2.y=17;
    cout<<"\np1="<<p1.x<<", "<<p1.y;
    cout<<"\np2="<<p2.x<<", "<<p2.y;
    //Create variable/Object of FractionNumber
    FractionNumber n1,n2;
    n1.num=22;
    n1.dnum=7;
    n2.num=15;
    n2.dnum=0;
    cout<<"\n n1="<<n1.num<<"/"<<n1.dnum;
    cout<<"\n n2="<<n2.num<<"/"<<n2.dnum;
    return 0;

}
