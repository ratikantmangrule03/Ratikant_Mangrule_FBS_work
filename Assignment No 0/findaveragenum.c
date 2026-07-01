#include <stdio.h>
int main()
{
  int no1, no2, no3, no4, no5;
  float average;
  printf("Enter 5 numbers : ");
  scanf("%d %d %d %d %d", &no1, &no2, &no3, &no4, &no5);
  average = (no1 + no2 + no3 + no4 + no5) / 5.0;
  printf("Average is : %f", average);
  return 0;
}