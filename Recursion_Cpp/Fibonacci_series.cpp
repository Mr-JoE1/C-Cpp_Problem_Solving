#include <iostream>

using namespace std;


/************************************
 * Fibonacci  Series : 0 1 2 3 5 8 13 ------n  
 *  The Recursion Formula logic of Fibonacci is:                    
 *                              ___ 0                     ----> n = 0 
 *                             |
 *              :- Fibo(n)= -->|___ 1                     ----> n = 1
 *                             |
 *                             |___ fibo(n-2) + fibo(n-1) ----> n>1 
 *                                          
 *                                                               
 **************************************/


/****************************
 *  Using Recursive function :
 *      Rfibo func: prints the value of (n)th number of Fibonacci series 
 *      Time Complexity = O(n^2)
 ***************************/

int Rfibo( int n )
{
    if (n <= 1 )  return n ;    

    return Rfibo(n-2) + Rfibo(n-1); 
 }


 /*****************************
  * Let's implement new Recurise function with less time order
  * Using Dynamic Array to memories recursion calls results and avoid repetation
  *     RfiboLite: same as Rfibo but faster 
  *     Time Complexity = O(n)
  * **************************/
 int RfiboLite(int n , int mem[]){

    if(n<=1){
        mem[n]=n ; 
        return n; 
    }else
    {
        if(mem[n-2]==-1)
            mem[n-2]==RfiboLite(n-2,mem);
        if(mem[n-1]==-1)
            mem[n-1]==RfiboLite(n-1,mem);
        mem[n]=mem[n-2]+mem[n-1];
        return mem[n-2]+mem[n-1];
    }
    delete [] mem ; 
 } 


/****************************
 * Using Iterarive loops
 *      fiboList func: prints n values of Fibonacci series 
 *      Time Complexity = O(n)
 ***************************/
void fiboList(int n )
{
    int first = 0 , second = 1, sum ; 
    for(int i = 2 ; i < n+1 ; i++ ){
        sum = first + second ; 
        first = second ;
        second = sum ;
        cout<< sum << " ";

    }


}

int main()
{
    // the index of wanted fibonacci value
    int n = 7 ; 
    //Used by RiboLite fun: 
        // create dynamic array to store recusive calls results 
    int * mem =  new int[n]() ; 
        // initialize the arry with non fibonacci number ie (-1)
    for(int i=0; i<=n ; i++)
        mem[i]=-1 ; 
    ////////////////////////////////////////

    double res ;
    res = RfiboLite(n, mem);
    cout<< "Fibonacci = "  << res << "\n";
    //fiboList(7); 
    return 0;
}