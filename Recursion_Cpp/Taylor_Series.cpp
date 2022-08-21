#include <iostream>

using namespace std;


/************************************
 * Taylor Series :
 * e^x = 1 + x/1 + x^2/2! + ------ + n terms
 * 
 * Let's get Taylor series of a number using Recursion
 **************************************/


/****************************
 * taylor func:  get the taylor series for:
 *  x :Taylor power
 *  n : number of tayler series terms 
 *   Time Complexity = O(n^2)
 ***************************/

double taylor(int x , int n ){
    static double p = 1 ;  // to store the power of x for each term
    static double f = 1 ;  //  to store the factorial of n  for each term 
    
    double r ; 
    // the recursion formula for Taylor 

    if( n == 0){
        
         return 1 ;
    }
    else{
        r = taylor(x, n-1);
        p = p*x;
        f = f*n; 
        return r+p/f ;  
    }
}

int main()
{
    double res ;
    res = taylor(3,10);
    cout<< "Taylor = "  << res << "\n";

    return 0;
}