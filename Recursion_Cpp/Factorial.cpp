#include <iostream>
/************************************
 * Factorial of n  : 1*2*3*4*5 ------*n  
 *  The Recursion Formula logic of Factorial is: 
 *                    
 *                              ___ 1            ----> n = 0 
 *                             |
 *              :- Rfact(n)=-->|
 *                             |
 *                             |___ Rfact(x-1)*x ----> n>0 
 *                                          
 *                                                               
 **************************************/
using namespace std;


/****************************
 *  Using iteration loop :
 *      fact func: prints the factorial value for given n  
 *      Time Complexity = O(n)
 ***************************/
int fact(int x ){
    int f = 1 ;
    
    for(int i=1 ; i<x+1 ; i++){
        f =(f*i);
    }
    
    return f ; 
}

/****************************
 *  Using Recursive function :
 *      Rfact func: prints the factorial value for given n  
 *      Time Complexity = O(n)
 ***************************/
int Rfact (int x )
{
    
    if (x == 0){  // because factorial of zero is 1  
        return 1 ;
    }else{
        return Rfact(x-1)*x ;
    }
}

int main()
{
    int res ;
    res = Rfact(5);
    cout<< "factorial = "  << res << "\n";

    return 0;
}