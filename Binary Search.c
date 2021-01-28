//Binary Search

#include <stdio.h>

void BinSearch(int a[], int n, int val)
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
    if(flag==0)
        printf("The value is not found");
}

void Sort(int a[], int n)
{
    int temp, val;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n\nEnter the number you want to search in the Array : ");
    scanf("%d", &val);
    BinSearch(a, n, val);
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
    Sort(a, n);
}