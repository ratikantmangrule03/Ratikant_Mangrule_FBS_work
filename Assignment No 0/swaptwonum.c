#include <stdio.h>
int main()
{
 int no1 = 10;
 int no2 = 20;
 int temp;
 printf("Numbers before swapping : \n");
 printf("a = %d\n", no1);
 printf("a = %d\n", no2);
 temp = no1;
 no1 = no2;
 no2 = temp;
 printf("Numbers after swapping : \n");
 printf("a = %d\n", no1);
 printf("a = %d\n", no2);
 return 0;
}