/*Modify the temperature conversion program to print the table in 
reverse order,that is, from 300 degrees to 0. */


#include <stdio.h>
 main() {
 	
 int far;
 
        printf("       TEMPERATURES\n");
		printf("--------------------------\n");
		printf(" Celsius\tFahrenheit\n");
		
 for (far = 300; far >= 0; far = far - 20)
 printf("  %3d \t \t %6.1f\n", far, (5.0/9.0)*(far-32));
 
 } 
