//To add two numbers using Pointers
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p1, *p2, n1, n2, s;
    printf("Enter the two numbers with a space in between them: ");
    scanf("%d %d",&n1,&n2);
    p1=&n1;
    p2=&n2;
    s=(*p1)+(*p2);
    printf("\nThe sum is %d",s);
    return 0;
}
