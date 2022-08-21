// recursion.cpp :
//      Testing how recursive function deals with stack 
//

#include <iostream>
using namespace std; 


void func(int n)
{
    if (n > 0)
    {
         cout << n << " ";
        func(n - 1); 
    }
}

int main()
{
    int x = 3;
    func(x);
    cout << "\n ";

    return 0; 
}
