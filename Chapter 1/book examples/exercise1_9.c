/*Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank. */



#include <stdio.h>
int main(){
	
	int c, b;
	b = 0;
	
	while ((c = getchar()) != EOF) {
		if (c == ' ')
		++b;
		
		if (c != ' '){
		
		if (b >= 1) {
			putchar(' ');
			b = 0;
		}
		putchar(c);
	}
  }
}
