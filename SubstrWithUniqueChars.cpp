//CPP program to search all substrings with unique characters


#include <iostream>
#include "string"
using namespace std;
bool check(string s){
int freq[27]={0};
for(int i=0;i<s.length();i++){
    freq[s[i]-'a']++;
}
for(int i=0;i<27;i++){
    if(freq[i]>1){
        return false;
    }
}
return true;
}

int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    int n=s.length();
    
    for(int i=n;i!=1;i--){
        for(int j=0;j<n-i;j++){
            if(check(s.substr(j,i))){
            cout<<s.substr(j,i)<<"\t";}
        }
    }
    

    return 0;
}
