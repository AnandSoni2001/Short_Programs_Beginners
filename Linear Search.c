/******************************************************************************
Author : Anand Soni

Linear Search :
Linear Search is finding an element in an array by iterating from each element
of the array. Sorting is not required in Linear Search.

Example:
Array given = 9 1 4 2 3
Element to be Searched = 2
Answer = 4 Position

Take a moment to make an algorithm yourself, it helps a lot, otherwise the solution 
is just below, Enjoy Coding !!!

*******************************************************************************/

#include <stdio.h>

void LinSearch(int a[ ], int n1, int n)     //Searching Function
{
    int flag=0;                             //You can also use boolean true/false
    for(int i=0; i<n; i++)
        if(a[i]==n1)
        {
            printf("The Element is found at %d position", (i+1));
            flag=1;
        }
    if(flag==0)                             //If element not found, it prints error message
        printf("Sorry the number is not found");
}

void main()
{
    int n, n1;
    printf("Enter the lenght and then array elements : ");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("------------ Your Array is ------------\n");
    for(int i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\nEnter the number you want to search in the Array : ");
    scanf("%d", &n1);                       //Element to be searched in the Array
    LinSearch(a, n1, n);                    //Function Calling
}
