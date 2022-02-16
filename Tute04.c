/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum (int n1, int n2); // function prototype
int maximum (int n1, int n2); // function prototype
int multiply (int n1, int n2); // function prototype

// begin the main function
int main() {
   
   int no1, no2; // declare variables
   
   printf("Enter a value for no 1 : "); // get value
   scanf("%d", &no1); // read value
   printf("Enter a value for no 2 : "); // get value
   scanf("%d", &no2); // read value
   
   printf("Minimum Number : %d\n", minimum(no1, no2)); // display result
   printf("Maximum Number : %d\n", maximum(no1, no2)); // display result
   printf("Multiply of Numbers : %d", multiply(no1, no2)); // display result
   return 0;
} // end of the main function

int minimum (int n1, int n2)
{
   if (n1 < n2)
      return n1;
   else
      return n2;
}

int maximum (int n1, int n2)
{
   if (n1 > n2)
      return n1;
   else
      return n2;
}

int multiply (int n1, int n2)
{
   return n1 * n2;
}
