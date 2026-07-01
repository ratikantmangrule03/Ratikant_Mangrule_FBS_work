#include <stdio.h>
int main()
{
 int b, h, a;
 printf("Enter base : ");
 scanf("%d", &b);
 printf("Enter height : ");
 scanf("%d", &h);
 a = 0.5 * (b * h);
 printf("Area = %d", a);
 return 0;
}