//To dynamically create an array and increment each element
#include <stdio.h>
#include <stdlib.h>
int n;
void input(int *);
void incr(int *);
void main()
{
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int *a = (int *)malloc(sizeof(int)*n);
    int *p;
    p=a;
    printf("\nStart entering the elements\n");
    input(a);
    printf("\nThe incremented values are\n");
    incr(a);
    free(a);
}
void input(int *p)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("\nEnter a number: ");
        scanf("%d",p);
        p++;
    }
}
void incr(int *p)
{
    int i;
    for (i=0;i<n;i++)
    {
        (*p)++;
        printf("%d ",(*p));
        p++;
    }
}
