////****
Problem Statement-
    Find the longest substring in a given string with non repeating characters

****////

#include <iostream>
#include "string"
#include <map>
#include "iterator"
using namespace std;
bool check(string s){
int freq[28]={0};
for(int i=0;i<s.length();i++){
    freq[s[i]-'a']++;
}
for(int i=0;i<28;i++){
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
    int maxSize;
    multimap<int,string> m;  //m will be used to store the unique char substring
                             //key in m will be string size, while value will be the strings of that size
    for(int i=n;i!=0;i--){              //nested loop to execute sliding window over the string
        for(int j=0;j<=n-i;j++){        //changes window size
            if(check(s.substr(j,i))){
            cout<<s.substr(j,i)<<"\t";
              //result=result+s.substr(j,i)+" "; 
              m.insert({i,s.substr(j,i)});
              
            }
        }
    }
    for(multimap<int,string>::iterator itr=m.begin();itr!=m.end();itr++){
        //cout<<itr->first<<" "<<itr->second<<"\n";
        maxSize=itr->first;
    }
    
    for(multimap<int,string>::iterator itr=m.begin();itr!=m.end();itr++){
        if(itr->first==maxSize){
            cout<<itr->second<<"\t";
        }
    }
//
    return 0;
}
