#include <iostream>
using namespace std;
/************************************
 * Combinations Formula used to get different possibilities for r elements of n list 
 * nCr(n,r) = n! / r!(n-r)!
 *  The Recursion Formula logic of nCr is: 
 *                    
 *                              ___ 1            ----> r = 0 or n=r 
 *                             |
 *              :- nCr(n,r)=-->|
 *                             |
 *                             |___ nCr(n-1,r-1)+nCr(n-1,r) ----> r>0 and r!=n
 *                                          
 *    Note:  CHECK Pascal's Triangle !                                                           
 **************************************/


/****************************
 *  Using Recursive function :
 *      nCr func: prints number of possiable combination for r of n 
 *      Time Complexity = O(n)
 ***************************/
int nCr (int n, int r )
{
    if( r==0 || r==n) return 1 ;
    return nCr(n-1,r-1)+nCr(n-1,r);
}

int main()
{
    int res ;
    res = nCr(5,3);
    cout<< "nCr(n,r) = "  << res << "\n";

    return 0;
}