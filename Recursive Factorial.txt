//Recursive Factorial 
#include <stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
void main()
{
    int num;
    printf("Enter a Number (integer) : ");
    scanf("%d", &num);
    printf("Answer is : %d", fact(num));
}