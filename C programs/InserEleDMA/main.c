//To dynamically create an array and insert any element at a position specified by the user
#include <stdio.h>
#include <stdlib.h>
int n, e;
void input(int *);
void inser(int *, int *, int *);
void copy(int *, int *, int *);
void display(int *);
void main()
{
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int *a = (int *)malloc(sizeof(int)*n);
    int *b = (int *)malloc(sizeof(int)*(n+1));
    int *p, af;
    p=a;
    printf("\nStart entering the elements\n");
    input(a);
    printf("\nEnter the element you want to insert: ");
    scanf("%d",&e);
    printf("\nEnter the position on which you want to insert the element. Start counting from 0. ");
    scanf("%d",&af);
    if ((af>n)||(af<0))
    {
        printf("\nInvalid position! Try again!");
        return;
    }
    copy(a, &af, b);
    a = (int *)realloc(a, sizeof(int)*(n+1));
    inser(a, &af, b);
    printf("\nYour new array is\n");
    display(a);
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
void copy(int *p1, int *ptr, int *p2)
{
    int i;
    for (i=0;i<n;i++)
    {
        (*p2)=(*p1);
        p1++;
        p2++;
    }
}
void inser(int *p1, int *ptr, int *p2)
{
    int i, c=0;
    for (i=0;i<n;i++)
    {
        if ((*ptr)==i)
        {
            (*p1)=e;
            p1++;
            c=1;
        }
        (*p1)=(*p2);
        p1++;
        p2++;
    }
    if (c!=1)
        (*p1)=e;
}
void display(int *p1)
{
    int i;
    for (i=0;i<=n;i++)
    {
        printf("%d ",(*p1));
        p1++;
    }
}
