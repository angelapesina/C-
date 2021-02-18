#include <stdio.h>
main (){
	int far, cel;
	int lower, upper, step;
	
	lower = 0; //lower limit of temperature scale 
	upper = 300; //upper limit of temperature scale
	step = 20; //step size of temperature scale
	
	printf("Fahrenheit compared with celsius: Table of temperature.\n");
		far = lower;
	while (far <= upper) {
		cel = 5 * (far-32) / 9;
		printf("%d\t%d\n", far, cel);
		//prinf("%3d %6d\n", far, cel); to print in two colums and justified 
		far = far + step;
	}
}
/* float version: 
#include <stdio.h>
main (){
	float far, cel;
	float lower, upper, step;
	
	lower = 0; //lower limit of temperature scale 
	upper = 300; //upper limit of temperature scale
	step = 20; //step size of temperature scale
	
	far = lower;
	while (far <= upper) {
		celsius = (5.0/9.0) * (far-32.0);
		prinf("%3.0f %6.1f\n", far, cel);  
		far = far + step;
	}
}
*/
