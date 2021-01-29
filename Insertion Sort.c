/******************************************************************************
Author : Anand Soni

Insertion Sort:
In this Sorting, the array is sorted from the front going to the back.

Our main objective here is to find the smallest element in each iteration from the
unsorted array and putting in the place of i. This way the array will be sorted in 
ascending order.
Think what you could do to make it in descending order !

Example:
Let an array be of length 5 with values :
5 1 4 2 3

Now the steps would be :

 INITIAL     SWAPPING         FINAL

5 1 4 2 3   i=0 and j=1     1 5 4 2 3 
1 5 4 2 3   i=1 and j=2     1 4 5 2 3
1 4 5 2 3   i=1 and j=3     1 2 5 4 3
1 2 5 4 3   i=2 and j=3     1 2 4 5 3
1 2 4 5 3   i=2 and j=4     1 2 3 5 4
1 2 3 5 4   i=3 and j=4     1 2 3 4 5 (Ans)

Take a moment to make an algorithm yourself, it helps a lot, otherwise the solution 
is just below, Enjoy Coding !!!

*******************************************************************************/

#include <stdio.h>

void InsertionSort(int a[ ], int n)      //Function for Insertion Sort
{
    int temp;                           //Temporary variables to store intermediate value
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];              //Swapping the Elements
                a[i]=a[j];
                a[j]=temp;
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
    InsertionSort(a, n);                //Calling the Function
    return 0;
}
