//Linear Search

#include <stdio.h>
void LinSearch(int a[ ], int n1, int n)
{
    int flag=0;
    for(int i=0; i<n; i++)
        if(a[i]==n1)
        {
            printf("The Element is found at %d position", (i+1));
            flag=1;
        }
    if(flag==0)
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
    scanf("%d", &n1);
    LinSearch(a, n1, n);
}