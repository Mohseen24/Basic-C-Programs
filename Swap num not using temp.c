#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the First Number: ");
    scanf("%d",&a);
    printf("Enter the Second Number: ");
    scanf("%d",&b);
    printf("Before swapping a is %d b is %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping a is %d b is %d",a,b);
    return 0;
}

