 //Write a program to count blanks, tabs, and newlines
 
 
 #include <stdio.h>
 int main(){
 	int b, nl, t, input;
 	b = 0;
 	nl = 0;
 	t = 0;
 	
 	printf("WRITE YOUR TEXT AND THEN PRESS 'ctrl z + enter' TO COUNT NEW LINES, BLANK SPACES AND TABS\n\n");
 	
 	while ((input = getchar()) != EOF)
 	if (input == '\n')
 	++nl;
 	
    else if (input == ' ')
 	++b;
 	
 	else if (input == '\t')
 	++t;
 	
 	printf("The number of new lines is: %d \n", nl);
 	printf("The number of blank spaces is: %d \n", b);
 	printf("The number of tabs is: %d \n", t);
 	
 }
