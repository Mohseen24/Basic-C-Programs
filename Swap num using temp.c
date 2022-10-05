#include<stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter the First Number: ");
    scanf("%d",&a);
    printf("Enter the Second Number: ");
    scanf("%d",&b);
    printf("Before swapping a is %d b is %d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping a is %d b is %d",a,b);
    return 0;
}
