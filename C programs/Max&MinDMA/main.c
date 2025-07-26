//To dynamically create an array and find the maximum and minimum elements
#include <stdio.h>
#include <stdlib.h>
int n;
void input(int *);
void min(int *, int *);
void max(int *, int *);
void display(int *);
void main()
{
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int *a = (int *)malloc(sizeof(int)*n);
    int *p, high, low;
    p=a;
    printf("\nStart entering the elements\n");
    input(a);
    printf("\nYour elements are\n");
    display(a);
    min(a, &low);
    max(a, &high);
    printf("\nThe maximum element is %d",high);
    printf("\nThe minimum element is %d",low);
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
void min(int *p1, int *p)
{
    int i;
    (*p)=(*p1);
    for (i=0;i<n;i++)
    {
        if ((*p1)<(*p))
            (*p)=(*p1);
        p1++;
    }
}
void max(int *p1, int *p)
{
    int i;
    (*p)=(*p1);
    for (i=0;i<n;i++)
    {
        if ((*p1)>(*p))
            (*p)=(*p1);
        p1++;
    }
}
void display(int *p1)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%d ",(*p1));
        p1++;
    }
}
