#include <stdio.h>
int main()
{
 int no = 80, h, rm;
 h = no / 60;
 printf("Hour = %d\n", h);
 rm = no % 60;
 printf("Remaining minutes = %d\n", rm);
 return 0;
}