/* Conecpt of namespaces in CPP
You can create logical partitions of your whole code space, each of these partitions will have theri own scope.
These parttions are known as namespace*/

#include <iostream>

using namespace std;
namespace A{
   void func(){
       cout<<"Hello from A\n";
   } 
}

namespace B{
    void func(){
        cout<<"Hello from B\n";
    }
}

using namespace A; //importing the scope of A
int main()         //so now main() is working both in the namespaces of std and A namespaces
{
    func();        //op:= "Hello from A"
    B::func();     //op:= "Hello from B"

    return 0;
}
