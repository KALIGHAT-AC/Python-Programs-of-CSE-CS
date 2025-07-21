//WAP to input a variable and pointer and check value and address using pointer and variable memory
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, num;
    printf("Enter a number: ");
    scanf("%d",&num);
    p=&num;
    printf("\nUsing pointer the number is %d and the address is %p",(*p),p);
    printf("\nUsing variable memory the number is %d and the address is %p",num,&num);
    return 0;
}
