#include <iostream>
#include<string>
using namespace std;

int main() {
    string largeString;
    string srcString ;
    int totalfound=0;
    int lastfoundPos=-1;

    cout<<"enter any string:";
    cin>>largeString;

    cout<<"enter search string:";
    cin>>srcString;

    do
    {
        lastfoundPos=largeString.find(srcString,lastfoundPos+1);
        if(lastfoundPos==string::npos)
        break;
        else
        totalfound++;
    } while (true);
    
    cout<<"\nentered String is :"<<largeString;
    cout<<"\nSearch String:"<<srcString;
    cout<<"\ntotal Occurance:"<<totalfound;






    cout << "Total occurrence of the last string in the large string: " << count << endl;

    return 0;
}
