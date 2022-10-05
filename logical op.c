#include <stdio.h>
int main()
{
// 0 is False, 1 is True.
// It is a boolean.
int a = 5, b = 5, c = 10, result;
result = (a == b) && (c > b);//True && True = True
printf("(a == b) && (c > b) is %d \n", result);
result = (a == b) && (c < b);//True && False = False
printf("(a == b) && (c < b) is %d \n", result);
result = (a == b) || (c < b);//True || False = True
printf("(a == b) || (c < b) is %d \n", result);
result = (a != b) || (c < b);//False || False = False
printf("(a != b) || (c < b) is %d \n", result);
result = !(a != b);//!(False) = True
printf("!(a != b) is %d \n", result);
result = !(a == b);//!(True) = False
printf("!(a == b) is %d \n", result);
return 0;
}
