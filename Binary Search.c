/******************************************************************************
Author : Anand Soni

Binary Search:
You know the Linear Searching (if not pls refer LinearSearch.c) in which we find
the element from the array one by one. It can be highly time consuming for the system
if the element is at the last position. There is barely any time consumed for 5 to 10 
elements but what about cases when there are more than 1 lakh elements.

So, what we do here is very simple, we firstly sort the loop by any of the Sorting method 
we like then we find the element by breaking the array in half and check whether the middle
value is smaller, equal or greater than the required value.

Enough talks, lets see example :
Let the user entered an array :    9 2 5 1 7
Now firstly sorting it will give : 1 2 5 7 9

Now user want to find the position of element 7 in the array so lets consider first:
l = variable to point the left end of array => l=0
u = variable to point the right end of array => u=n-1
mid = average of l and u => (l+u)/2
P.S. All the l, u and mid are pointing the location not the values

So, l=0, u=n-1=4, mid=(0+4)/2 = 2
    1  2  5  7  9 
    l    mid    u 
    
Since element at position mid or Ar[mid] != 7 and A[mid]=5<7 so it is clear that the 
element is on right side (Sorted in Ascending) therefore we will put l ahead of mid.

So now, l=mid+1=3, u=unchanged=4, mid=(3+4)/2=(int)3.5=3
    1   2   5   7   9
                l   u
               mid

Finally, Ar[mid] equals to the required value = 7 then it displays the position and 
the program will be terminated.
    
Take a moment to make an algorithm yourself, it helps a lot, otherwise the solution 
is just below, Enjoy Coding !!!

*******************************************************************************/

#include <stdio.h>

void BinarySearch(int a[], int n, int val)      //Binary Search Function 
{
    int l=0, u=n-1, mid, flag=0;           
    while(l<=u)
    {
        mid=(l+u)/2;
        if(a[mid]==val)
        {
            printf("Value found at %d position", mid+1);
            flag=1;
            break;
        }
        else if(a[mid]<val)
            l=mid+1;
        else
            u=mid-1;   
    }   
    if(flag==0)                                 //To print error message when number not found
        printf("The value is not found");
}

void Sort(int a[], int n)                       //Sorting Function
{
    int temp, val;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];                      //Swapping
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n\nEnter the number you want to search in the Array : ");
    scanf("%d", &val);                          //Element to be searched in the Array
    BinarySearch(a, n, val);                    // Calling Searching Function
}

void main()
{
    int n;
    printf("Enter the lenght and then array elements (int values) : ");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("------------ Your Array is ------------\n");
    for(int i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n\nSorting the Array ......\n");
    Sort(a, n);                                 //Calling Sorting Function
}
