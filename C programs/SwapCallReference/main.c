//To swap two numbers using call by reference
#include <stdio.h>
#include <stdlib.h>
void swap(int *ptr1, int *ptr2)
{
    *ptr1=(*ptr1)+(*ptr2);
    *ptr2=(*ptr1)-(*ptr2);
    *ptr1=(*ptr1)-(*ptr2);
    printf("\nThe swapped numbers are %d and %d",(*ptr1),(*ptr2));
}
int main()
{
    int num1, num2;
    printf("Enter the numbers with a space in between them: ");
    scanf("%d %d",&num1,&num2);
    swap(&num1,&num2);
    return 0;
}
