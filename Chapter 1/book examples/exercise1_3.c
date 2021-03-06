/*Modify the temperature conversion program
 to print a heading above the table. */

#include <stdio.h>
main (){
	float far, cel;
	float lower, upper, step;
	
	lower = 0; //lower limit of temperature scale 
	upper = 300; //upper limit of temperature scale
	step = 20; //step size of temperature scale
	
	far = lower;
	
		printf("       TEMPERATURES\n");
		printf("--------------------------\n");
		printf(" Fahrenheit \t  Celsius\n");
	while (far <= upper) {
		cel = (5.0/9.0) * (far-32.0);

		printf("   %3.0f \t \t %6.1f\n", far, cel);  
		far = far + step;
	}
}
