//CPP program to search all substrings with unique characters

//Algorithm
/*
1.Input the string s
2.take n= s.length() 
3. n will be our window size
4. Now a run a loop which will start with window size n and decrease to 1
   and will decrease the size of n/window size after every iteration
   for(i=n;i!=1;i--)
5. for each iteration of above loop run another loop
6. this loop will find every substring of n window size
7. run this loop for every n from 0 to n-1-i(last array position minus current window size) 
   for(j=0;j<n-i;j++)
8. and to find substring of s starting at index j and of size i
   s.substring(j,i);
9. Add a function check() to check if all chars are unique or not in the substring
*/


#include <iostream>
#include "string"
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
    
    for(int i=n;i!=0;i--){
        for(int j=0;j<=n-i;j++){
            if(check(s.substr(j,i))){
            cout<<s.substr(j,i)<<"\t";}
        }
    }
    

    return 0;
}
