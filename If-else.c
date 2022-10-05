#include <stdio.h>
int main() {
int number;
printf("Enter an integer: ");
scanf("%d", &number);
// true if number is less than 0
if (number < 0) {
printf("%d is Negative.\n", number);
}
else
printf("%d is Positive",number);
return 0;
}
