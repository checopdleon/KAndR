#include <stdio.h>

/* Count blanks, tabs, and newlines. */

int main () {
  int currentChar, blanks, tabs, newLines;

  blanks = 0;
  tabs = 0;
  newLines = 0;

  while ((currentChar = getchar() ) != EOF) {
    if (currentChar == '\n') ++newLines;
    if (currentChar == '\t') ++tabs;
    if (currentChar == '32') ++blanks;
  }

  printf("newlines = %d\n", newLines);
  printf("tabs = %d\n", tabs);
  printf("blanks = %d\n", blanks);

  return 0;
}
