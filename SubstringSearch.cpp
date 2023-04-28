#include <iostream>
#include "string"
using namespace std;

int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    int n=s.length();
    
    for(int i=n;i!=1;i--){
        for(int j=0;j<n-i;j++){
            cout<<s.substr(j,i)<<"\t";
        }
    }
    

    return 0;
}
