// static_and_recursion.cpp :
//      see how recursive function effect a static variable 
//

#include <iostream>
using namespace std;


// func 2  with static var a !
int func2(int n)
{
    static int a = 0 ; 
    if (n > 0)
    { 
         a++; 
         return func2(n-1)+a ;
    }
    return 0;
}

int func1(int n)
{
    if (n > 0)
    {
         return func1(n-1)+n ;
    }
    return 0;
}

int main()
{
    int res ;
    
    res = func1(5);
    cout <<"Func1= "<< res <<"\n";
    res = func2(5);
    cout <<"Func2= "<< res <<"\n";

    return 0;
}
