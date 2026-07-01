#include <stdio.h>
int main()
{
 int l, w, p;
 printf("Enter the length : ");
 scanf("%d", &l);
 printf("Enter the width : ");
 scanf("%d", &w);
 p = 2 * (l + w);
 printf("Perimeter is : %d", p);
 return 0;
}