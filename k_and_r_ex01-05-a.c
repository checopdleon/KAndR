#include <stdio.h>

/* Print Fahrenheit-Celsius table for
   fahr = 300, 380, ..., 0 */

int main () {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;       /* lower limit of temp table. */
  upper = 300;     /* upper limit */
  step = 20;       /* step size */

  fahr = upper;

  printf ("Fahr\tCel\n");

  while (fahr >= lower)  {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf ("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr - step;
  }
  return 0;
}
