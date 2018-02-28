#include <stdio.h>

/* Print Celsius-Fahrenheit table
   for celsius = 0, 20, ..., 300; floating-point version. */

int main ()  {
  float fahr, celsius;
  int lower, upper, step;

  // Lower limit of temperature table.
  lower = 0;

  // Upper limit of the table.
  upper = 300;

  // Step size is:
  step = 20;

  //Print table header
  printf ("Cel\tFahr\n");

  // Print out the table
  celsius = lower;
  while (celsius <= upper)  {
    fahr = (celsius * (9.0 / 5.0) ) + 32.0;
    printf ("%3.0f %6.1f\n", celsius, fahr);
    celsius += step;
  }
}
