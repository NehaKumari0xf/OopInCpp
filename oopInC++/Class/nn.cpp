/*
Creating a class means creating a new data type
================================================================
Syntax:
class ClassName
{
    access-specifier:
    //memeber declaration
    //members can be variable or functions
    access-specifier:
    //memebr declaration
    access-specifier:
    //memeber declaration
    .
    .
    .

};

class-> Keyword
ClassName-> Any valid C++ identifier
Access specifier: Specifies the access level of members. C++ has the access specifier:
private, protected and public.
private: Only class member can access the private member
public:Any where accessable
protected : Only class member and derived class member can access it.

Access Specifier is optional.
If not given in class-> private bydefault.
If not given in struct->public bydefault.

*/
#include<iostream>
using namespace std;
class  Point
{
    private:
    int  x;
    int y;
    public:
    void  setx(int xt )
};
int main()
{
    Point p1,p2,p3;
   

}
