/*just like how vector is better than a traditional array, and deque is better than a vector
    and a 2D vector/deque is better than a 2D array.
    Below program implements a 2D deque.
*/

#include <iostream>
#include "deque"

using namespace std;

int main()
{
    deque<deque<int>> ar;
    deque<int> temp;
    cout<<"Enter values the size for array: ";
    int size,data;
    cin>>size;
    
    for(int i=0;i<size;i++){
        
        ar.push_back(deque<int>());
        for(int j=0;j<size;j++)
        {cin>>data;
        ar[i].push_back(data);
        }
           
        }
        //ar.push_back(temp);
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++)
        {cout<<ar[i][j];
        }
            
        }
   
    return 0;
}
