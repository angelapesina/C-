 /*Rewrite the temperature conversion program of Section 1.2 to use a function
for conversion. */

#include <stdio.h>

void convert();

int main() {
	
		printf("       TEMPERATURES\n");
		printf("--------------------------\n");
		printf(" Fahrenheit \t  Celsius\n");
		
		convert();
	
}

void convert(){
	float far, cel;
	float lower, upper, step;
	
	lower = 0; 
	upper = 300; 
	step = 20; 
	
	far = lower;
	
	while (far <= upper) {
		cel = (5.0/9.0) * (far-32.0);

		printf("   %3.0f \t \t %6.1f\n", far, cel);  
		far = far + step;		
}
}
