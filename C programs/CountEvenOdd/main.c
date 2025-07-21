//To count even and odd numbers in an array
#include <stdio.h>
#include <stdlib.h>
void CountEvenOdd(int *arr, int *size, int *even, int *odd)
{
    int i;
    for (i=0;i<(*size);i++)
    {
        if ((*arr)%2==0)
            (*even)++;
        else
            (*odd)++;
        arr++;
    }
}
void main()
{
    int n, e=0, o=0,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("\nStart entering the elements\n");
    for (i=0;i<n;i++)
    {
        printf("Enter a number: ");
        scanf("%d",&a[i]);
    }
    CountEvenOdd(a, &n, &e, &o);
    printf("\nNo. of even numbers = %d",e);
    printf("\nNo. of odd numbers = %d",o);
}
