#include <iostream>
using namespace std;
/************************************
 * Tower of Hanoi 
 * Here is animation to understand and solve the probom 
 *          |>>>https://www.mathsisfun.com/games/towerofhanoi.html
 * 
                                                       
 **************************************/


/****************************
 *  Using Recursive function :
 *     TOH: prints The moves and the  No of movies 
 *      Time Complexity = O(n)
 ***************************/
int  TOH (int n, int A, int B, int C )
{
    static int moves ; 
    if (n > 0){
        TOH(n-1, A, C, B);
        cout<<"From: " << A <<" To: "<<C<<"\n";
        moves++; 
        TOH(n-1, B, A, C);

    }
    return moves ; 
}

int main()
{
    cout<<"Total Moves = "<< TOH(12,1,2,3) << "\n" ;
    
    return 0;
}