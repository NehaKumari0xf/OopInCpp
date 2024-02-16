

#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[5];
	int i; 
	

    cout<< "Enter 10 names:\n";
    for (int i = 0; i < 5; i++) {
        getline(cin, names[i]);
    }
    
    cout<<"\nNames:\n";
    for (int i = 0; i < 5; i++) {
        if (names[i].find("raj")!=string::npos) 
            cout<< names[i] << endl;        
   }
    return 0;
}