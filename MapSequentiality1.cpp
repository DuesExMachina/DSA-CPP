//can map be a sequential datastructure
#include <iostream>
#include "map"

using namespace std;

int main()
{
    map<int,int> m;
    
    int ar[]={1,2,3,4,5,6};
    int i=0;
    for(int a:ar)
    {
        m[i++]=a;
    }
    m.erase(3);
    
    /*for(auto a:m){
        cout<<a.first<<"\t\t"<<a.second<<'\n';
    }*/
    for(int i=0;i<6;i++){
        cout<<m[i];
    }
    return 0;
}

/*Key understandings
1. [] operator is overloaded operator to work for map object.
2. map[key_value] will return the value stored for that key in the map
3. if a key value is encountered by the [] operator for which can't find an associted value then 0 will be returned.
4. Each map elements is like a node connected to next node in order of ascending key value.
5. Even in case of using iterator instead of [] operator the traversal will be done in order of increasing key value sequentially.

Conclusion is ordered map is sequential 
*/
