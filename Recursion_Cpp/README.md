# Recursion Cpp 

collection of common problems solved by Recursion

# Problems List :
 
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
 
 /************************************
 * Taylor Series :
 * e^x = 1 + x/1 + x^2/2! + ------ + n terms
 * Horner Rule is meant to reduce number of multiplications in Taylor Serios as following :
 * e^x = 1 + x/1[1+x/2[1+x/3[1+x/4]]]] ---- displaying fist 4 terms only 
 **************************************/

/************************************
 * Taylor Series :
 * e^x = 1 + x/1 + x^2/2! + ------ + n terms
 * 
 * Let's get Taylor series of a number using Recursion
 **************************************/
 
 /************************************
 * Tower of Hanoi 
 * Here is animation to understand and solve the probom 
 *          |>>>https://www.mathsisfun.com/games/towerofhanoi.html
 * 
                                                       
 **************************************/
