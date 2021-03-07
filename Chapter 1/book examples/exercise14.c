/*Write a program to print a histogram of the frequencies of different characters
in its input.*/

#include <stdio.h>
int main()
{
  int histogram[95] = {0}; 
  int c, i, j;

printf("WRITE YOUR TEXT AND THEN PRESS 'ctrl z + enter' TO SEE THE CHARACTERS HISTOGRAM \n\n");

  while ((c = getchar()) != EOF) {
    ++histogram[c-' '];
  }

  for (i = 32; i < 127; ++i) {
    printf("%c ", i);
    ++histogram[c-' '];
    for (j = 0; j < histogram[i-' ']; ++j) {
      putchar('*');
    }
    putchar('\n');
  } 
}
