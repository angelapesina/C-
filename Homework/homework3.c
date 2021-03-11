/*Using internet information and help form ANGEL RAÚL CHVEZ CARRILLO*/

#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

int main() {

   char c;
   int num, par, com;
   num = 0;
   par = 0;
   com = 0; 
    printf("Write your string:\n");
   
   while ((c = getchar()) != EOF ){
   	switch (c) {
   		case '(':
   			par = TRUE;
   			putchar(c);
   			break;
   		case ')':
   			par = FALSE;
   			putchar(c);
   			break;
   		case '/"':
		   putchar (c);
		   com++;
		   break;
		 case '\"':
	   	   putchar (c);
	   	   com++;
		   break;  	
   	
   		default:
     if(c != '.'){ 
	 if (par == TRUE || com == TRUE) {
	 	putchar(c);
	 } else {
	 	if (com == 2){
	 		com = 0;
		 }
	 	if (c-'0' >= 0 && c-'0'<=9) {
	 	putchar ('X');
	 } else {
	 	putchar(c);
	 }
	 } 
	}
  }
 }
}




