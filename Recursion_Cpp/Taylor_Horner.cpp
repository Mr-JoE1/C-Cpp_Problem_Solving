#include <iostream>

using namespace std;


/************************************
 * Taylor Series :
 * e^x = 1 + x/1 + x^2/2! + ------ + n terms
 * Horner Rule is meant to reduce number of multiplications in Taylor Serios as following :
 * e^x = 1 + x/1[1+x/2[1+x/3[1+x/4]]]] ---- displaying fist 4 terms only 
 **************************************/


/****************************
 * horner func:  get the taylor series for:
 *  x :Taylor power
 *  n : number of tayler series terms 
 *   Time Complexity = O(n)
 ***************************/

double horner(int x , int n ){
    static double s = 1 ;  // to store the power of x for each term
    // the recursion formula for Taylor 

    if( n == 0){
        return s ;
    }
    else{
        s = 1 + x*s/n ;
    }
    return horner(x,n-1) ;  
}


// same function using loops
double hornerL( int x , int n){
    double s  =  1 ; 

    for( ;n>0; n--){
        s = 1 + x*s/n ;
    }
    return s ; 

}
int main()
{
    double res ;
    res = hornerL(3,10);
    cout<< "Taylor = "  << res << "\n";

    return 0;
}