//accept ten names. again accept another string and print all name that ends with last 
//entered string

#include<iostream>
#include<string>
using namespace std;

int main(){
    string names[5], name;
    int i;

    cout<<"Enter any names:"<<endl;
    for(i=0; i< 5; i++){
        cout<<i+1<< "Names: ";
        getline(cin, names[i]);
    }

    cout<<endl<<"Enter any one last name to search : ";
    cin>>name;

    cout<<"Print all name that contains the last entered search string";
    for(i=0; i<5; ++i){
        if(names[i].compare(names[i].length()-name.length(),name.length(),name)==0)
        cout<<name[i]<<endl;
    }
    return 0;
}