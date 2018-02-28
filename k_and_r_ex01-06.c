#include <stdio.h>

/* Verify "getChar() != EOF" is 0 or 1. 

   I'm not sure if this is what the authors wanted.   But I wrote this program that will always print 
   1 because there is no single key on the keyboard   that can be typed that will be EOF. And the "!" 
   flips this false condition.*/

int main ()  {

  printf("%d\n", (getchar() != EOF));

  return 0;
}
