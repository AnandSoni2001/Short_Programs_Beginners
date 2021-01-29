/******************************************************************************
Author : Anand Soni

Bubble Sort:
In this the array is sorted from the back and then it goes to the front of the array.
It is done by swapping adjacent values of the array one by one.

Example:
Let an array be of length 5 with values :
9 2 5 1 7

 INITIAL		 SWAPPING          FINAL

9 2 5 1 7	i=0, j=0, j+1=1		2 9 5 1 7
2 9 5 1 7	i=0, j=1, j+1=2		2 5 9 1 7                                                                                                                                                          
2 5 9 1 7	i=0, j=2, j+1=3		2 5 1 9 7                                                                                                                                                   
2 5 1 9 7	i=0, j=3, j+1=4		2 5 1 7 9                                                                                                                                                   
2 5 1 7 9	i=1, j=1, j+1=2		2 1 5 7 9                                                                                                                                                   
2 1 5 7 9	i=2, j=0, j+1=1		1 2 5 7 9 (Ans)                                                                                                                                           

Take a moment to make an algorithm yourself, it helps a lot, otherwise the solution 
is just below, Enjoy Coding !!!

*******************************************************************************/

#include <stdio.h>

void BubbleSort(int a[ ], int n)      //Function for Bubble Sort
{
    int temp;          //Temporary variables to store intermediate value
    for (int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-(i+1); j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];              //Swapping the Elements
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\n\n---------------- Sorted Array ----------------\n");
    for(int i=0; i<n; i++)              //Printing the Sorted Array
        printf("%d ", a[i]);
}

int main()                              //Main Function
{
    int n;
    printf("Enter the size of Array followed by its element : ");
    scanf("%d", &n);                    //Size of Array Input
    int a[n];
    for(int i=0; i<n; i++)              //Taking Array Elements Input
        scanf("%d", &a[i]);
    printf("\n------------ Ok so your Array is ------------\n");
    for(int i=0; i<n; i++)              
        printf("%d ", a[i]);
    BubbleSort(a, n);                //Calling the Function
    return 0;
}
