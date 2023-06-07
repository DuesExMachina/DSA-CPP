#include <iostream>
#include "vector"
#include "iterator"
#include "algorithm"

using namespace std;

int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int ar[n];
    
    cout<<"Enter the elements for the array: ";
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    
    vector<int> freq;
    vector<int>::iterator itr;
    
    for(auto a:ar){ 
    
       freq.push_back(0);
    }
    
    for(int i:ar){
       freq[i]++; 
    }  
    
    for(auto a:freq){ 
    
        cout<<a;
    }

    return 0;
}
