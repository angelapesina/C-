//Write a program that prints its input one word per line. 

#include <stdio.h>
#define IN 1
#define OUT 0

int main () {
  int c, state;
  
  state = IN;
  while((c = getchar()) != EOF) {
   
    if(c == ' ' )
      state = OUT;

    else if (state == OUT) {
      state = IN;
      putchar( '\n' );
      putchar(c);

    }
   
    else
      putchar(c);
  }
}
