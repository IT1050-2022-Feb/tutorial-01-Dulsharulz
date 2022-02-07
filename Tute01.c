/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2;
  int tot;
  float avg;
  printf("Enter Your 1 subject Mark:");
  scanf("%d", &mark1);
  printf("Enter Your 2 nd subject Mark:");
  scanf("%d", &mark2);
  tot=mark1+mark2;
  avg=tot/2.0;
  printf("Average two Number of mark:%.2f",avg);


  return 0;
}

