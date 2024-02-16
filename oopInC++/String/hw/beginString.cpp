// 1. write a C++ program that will accept 10 names from user and print all name's that begin with "raj".
// 1. write a C++ program that will accept 10 names from user and print all name's that begin with "raj".

#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[3];
    int count;

    cout << "Enter 10 names:"<<endl;
    for (int i = 0; i < 3; i++) {
        cout<<i+1<<"Name :";
        getline(cin, names[i]);
    }

    cout << "\nNames beginning with 'raj':-\n ";
    for (int i = 0; i < 3; i++) {
        if (names[i].length()>=3 && names[i].compare(0,3,"raj")==0) 
            cout << names[i] << endl;
            count++;        
    }

    return 0;
}

//cout<<"Sorry! None of the given names have 'kumari' at the end of the name.";

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[3];
    int count;

    cout << "Enter 10 names:\n";
    for (int i = 0; i < 3; i++) {
        getline(cin, names[i]);
    }

    cout << "\nNames beginning with 'raj':\n";
    for (int i = 0; i < 3; i++) {
        if (names[i].substr(0, 3) == "raj") 
            cout << names[i] << endl;
            count++;        
    }

    return 0;
} */

//cout<<"Sorry! None of the given names have 'kumari' at the end of the name.";