// 1. write a C++ program that will accept 10 names from user and print all name's that ends with "kumari".
// 1. write a C++ program that will accept 10 names from user and print all name's that ends with "kumari".

#include<iostream>
#include<string>
using namespace std;
int main(){
    string name[3];
    int i;
    
    for(i=0;i<3;i++){
        cout<<" Enter name :  ";
        getline(cin,name[i]);
    }

    for( i=0;i<3;i++){
        if(name[i].length()>=6 && name[i].compare(name[i].length()-6,6,"kumari")==0)
        cout<<name[i]<<endl;
        
    }
    
    return 0;
}

//  cout<<"Sorry! None of the given names have 'kumari' at the end of the name.";