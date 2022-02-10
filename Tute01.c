/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
 
  float sub1,sub2,avg;
  printf("Enter the number of marks for the first subject:");
  scanf("%f",&sub1);
  printf("Enter the number of marks for the second subject:");
  scanf("%f",&sub2);
  avg=(sub1+sub2)/2;
  printf("The average of the marks is:%.2f",avg);
  return 0;
}

