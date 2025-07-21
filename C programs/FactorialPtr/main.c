//To find the factorial of a number using pointers
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n, fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    ptr=&n;
    while ((*ptr)!=0) {
        fact = fact * (*ptr);
        (*ptr)--;
    }
    printf("The factorial of the given number is %d",fact);
    return 0;
}
