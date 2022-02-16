/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
// begin of the main function
int main() {
   int Marks1, Marks2; // declare variables
   double Average; // declare variable
   
   printf("Enter 1st subject Marks : "); // get inputs
   scanf("%d", &Marks1); // read values
   printf("Enter 2nd subject Marks : "); // get inputs
   scanf("%d", &Marks2); // read values
   
   Average = (Marks1 + Marks2) / 2; // calculation
   
   printf("Average of 2 subjects : %.2f", Average); // display result
  
  return 0;
} // end of main function

