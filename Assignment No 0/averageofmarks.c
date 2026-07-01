#include <stdio.h>
int main()
{
 int sub1, sub2, sub3, sub4, sub5, t;
 float a;
 printf("Enter marks : ");
 scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
 t = sub1 + sub2 + sub3 + sub4 + sub5;
 printf("Tatal = %d\n", t);
 a = t / 5.0;
 printf("Average = %f\n", a);
 return 0;
}