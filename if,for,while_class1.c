#include <stdio.h> //standard input and output 
int main(int argc, char** args) {
int x, y, z; //integers 

x= 3; //define initial values 
y= 7;

z= x; //swap values
x= y;
y= z;

if (x > y) {
	printf("if: hello\n");
}

z= x;
while (x > 0) { //loop (cycle)
	printf("%i\n", 2 * x); //pint on integer 
	x--; //lower by one
}

//for (x = 1; x <= 5; x += 2){
//	printf("y - x = %i now and x= %i\n",y - x, x); //regular content 
//}

x= z; 
do{
	printf("do-while: %i\n", 2 * x); //print on integer 
	x--; //lower by one 
} while (x > 0);
return 1;
}
