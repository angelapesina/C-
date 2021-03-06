/* Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging. */

#include <stdio.h>

int main() {
  int w;

  while((w=getchar()) != EOF)
  {
    if( w == ' ' || w == '\n' || w == '\t')
      putchar('\n');
    else
      putchar('*');
  }
  return 0;
}
