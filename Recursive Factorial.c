/******************************************************************************
Author : Anand Soni

Recursive Factorial:
A recursive function is a function that calls itself during its execution.

The factorial of a number is the product of all the integers from 1 to that number. 
For example, the factorial of 6 is 1*2*3*4*5*6 = 720.

Take a moment to make an algorithm yourself, it helps a lot, otherwise the solution 
is just below, Enjoy Coding !!!

*******************************************************************************/
#include <stdio.h>

int fact(int n)                //Recursive Factorial Function
{
    if(n==0)
        return 1;              //When n=0, it is final call since 0!=1 and multiplying directly would result to 0
    else
        return n*fact(n-1);    //From here it calls itself
}

void main()
{
    int num;
    printf("Enter a Number (integer) : ");
    scanf("%d", &num);
    printf("Answer is : %d", fact(num));    //Calling the Function
}
