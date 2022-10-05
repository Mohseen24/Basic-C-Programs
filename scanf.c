#include <stdio.h>
int main()
{
int testInteger;
float num1;
double num2;
char chr;

printf("Enter a character: ");
scanf("%c",&chr);
printf("Enter an integer: ");
scanf("%d", &testInteger);
printf("Enter a float value: ");
scanf("%f", &num1);
printf("Enter a double value: ");
scanf("%lf", &num2);


printf("You entered %c.\n", chr);
printf("Number = %d\n",testInteger);
printf("num1 = %f\n", num1);
printf("num2 = %lf\n", num2);
return 0;
}
