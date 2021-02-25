//USED THE FILE THAT THE TEACHER DID TO ELIMINATE COMMENTS AS A BASE AND HELP FORM  Angel Raúl Chávez Carrillo AND EMILIO GONZALEZ 
//MY CODE CAN PRINT LINES LIKE THIS "HELLO" IT PRINT "HELLO" OR "<BODY>" IT PRINT __ (BLANK)
//BUT IF YOU PUT HELLO <BODY> IT DOESN´T WORK IN THE RIGHT WAY :( I WILL PRACTICE MORE 


#include <stdio.h>
#include <string.h> 

#define MAX 80

char linea[MAX];

int saca();

int main() {
  extern char linea[MAX];
  int ignore = 0;
  int l = 0;

  
     printf("Ingresa tu texto HTML: \n");
  while ((l = saca()) == 0) { 
    if (strstr(linea, "<") != NULL) { 
      ignore = 1;
    }
    if (!ignore) {
	  printf("Texto plano: \n %s\n", linea);
    }
    if (strstr(linea, ">") != NULL) {
      ignore = 0;
    }
  }
  return 0;
}

 int saca() {
  extern char linea[MAX];
  int c, i = 0;
  int sc = 0;
  for (; i < MAX - 1 && (c = getchar()) != EOF && c != '\n';) {
    if (c == '>') {
      sc++;
      if (sc == 2) {
	i--;
      }
    } else if (sc < 2) { 
      sc = 0;
    }
    if (sc < 2) {
      linea[i++] = c;
    }
  }
  linea[i] = '\0'; 
  return c == EOF;
} 
