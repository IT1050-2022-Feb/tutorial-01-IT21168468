/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
// begin the main function
int main() {
  
  int i, Num, Sum = 0; // declare variables
  
  printf("Enter Number : "); // get value
  scanf("%d", &Num); // read value
  
  for (i = 0; i <= Num; i++)
    Sum = i + Sum; // calculation
  
  printf("Sum = %d", Sum); // display result
    
  return 0;
} // end of the main function

