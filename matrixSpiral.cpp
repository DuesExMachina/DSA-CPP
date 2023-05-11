#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the value for M and N:";
    int m,n;
    cin>>m>>n;
    int a[m][n];
    int t=0,b=m-1,l=0,r=n-1;
    
    int count=0,i,j;
    //input matrix elements
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        cin>>a[i][j];
        }
    }
    //move till m*n elements have been printed
    while(count<(m*n)){
       //move right till r
       for(i=t,j=l;j!=r;j++){
           cout<<a[i][j]<<" ";
           count++;
       }
    //move down till b
        for(i=t,j=r;i!=b;i++){
           cout<<a[i][j]<<" ";
           count++;
       }t++;
       
    //move left till l
    for(i=b,j=r;j!=l;j--){
           cout<<a[i][j]<<" ";
           count++;
       }r--;
       
    //move up till t 
    for(i=b,j=l;i!=t;i--){
           cout<<a[i][j]<<" ";
           count++;
       }b--;
       l++;
    }
    
    

    return 0;
}
