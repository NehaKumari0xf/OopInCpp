//write ac++ prog in which accept ten names again acept another string and print all names
// that contains last entered string.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[5];
    string name;
	int i; 
	

    cout<< "Enter 10 names:\n";
    for (int i = 0; i < 5; i++) {
        getline(cin, names[i]);
    }
    
    cout<<"Enter name:\n";
    cin>>name;
    
    cout<<"\nNames:\n";
    for (int i = 0; i < 5; i++) {
        if (names[i].find(name)!=string::npos) 
            cout<< names[i] << endl;        
   }
    return 0;
}