#include<iostream>
#include<cstring>
#include<string>

using namespace std;
int main()
{
    string a;
    cout << "Enter a :";
    cin >> a;
    strlwr(a);
    cout<<"lowercase:%c"<<a;
    return 0;
}