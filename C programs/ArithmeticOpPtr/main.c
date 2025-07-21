//To do all sorts of arithmetic operations using pointers
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p1, *p2, n1, n2, s, diff, p, r;
    float div;
    printf("Enter the two numbers with a space in between them: ");
    scanf("%d %d",&n1,&n2);
    p1=&n1;
    p2=&n2;
    s=(*p1)+(*p2);
    p=(*p1)*(*p2);
    diff=(*p1)-(*p2);
    div=(float)(*p1)/(*p2);
    r=(*p1)%(*p2);
    printf("\nThe sum is %d",s);
    printf("\nThe difference is %d",diff);
    printf("\nThe product is %d",p);
    printf("\nThe division answer is %f",div);
    printf("\nThe remainder is %d",r);
    return 0;
}
