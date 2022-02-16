/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>
// begin the main function
int main() {
  
  int Distance; // declare variable
  double Amount; // declare variable
  
  printf("Enter Distance : "); // get value
  scanf("%d", &Distance); // read value
  
  if (Distance >= 20 && Distance < 50)
    Amount = Distance * 50; // calculation
  else
    Amount = 30 * 50 + (Distance - 30) * 40; // calculation
  
  printf("Amount = Rs.%.2f", Amount); // display result
  
  return 0;
} // end of the main function
