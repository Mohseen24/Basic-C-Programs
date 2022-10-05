#include <stdio.h>
int main()
{
// 0 is False, 1 is True.
// It is a boolean.
int a = 5, b = 5, c = 10;
printf("%d == %d is %d \n", a, b, a == b);//Equal to
printf("%d == %d is %d \n", a, c, a == c);
printf("%d > %d is %d \n", a, b, a > b);//Greater than
printf("%d > %d is %d \n", a, c, a > c);
printf("%d < %d is %d \n", a, b, a < b);//Less than
printf("%d < %d is %d \n", a, c, a < c);
printf("%d != %d is %d \n", a, b, a != b);//Not equal to
printf("%d != %d is %d \n", a, c, a != c);
printf("%d >= %d is %d \n", a, b, a >= b);//Greater than or Equal
printf("%d >= %d is %d \n", a, c, a >= c);
printf("%d <= %d is %d \n", a, b, a <= b);//Less than or Equal
printf("%d <= %d is %d \n", a, c, a <= c);
return 0;
}
