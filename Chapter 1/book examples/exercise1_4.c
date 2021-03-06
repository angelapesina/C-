//Write a program to print the corresponding Celsius to Fahrenheit table

#include <stdio.h>
main (){
	float far, cel;
	float lower, upper, step;
	
	lower = 0; //lower limit of temperature scale 
	upper = 300; //upper limit of temperature scale
	step = 20; //step size of temperature scale
	
	cel = lower;
	
		printf("       TEMPERATURES\n");
		printf("--------------------------\n");
		printf(" Celsius \tFahrenheit\n");
	while (cel <= upper) {
		far = cel * (9.0/5.0) + 32;

		printf("   %3.0f \t \t %6.1f\n", cel, far);  
		cel = cel + step;
	}
}
