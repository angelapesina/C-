/* Homework done with help of ANGEL RAUL CHAVEZ CARRILLO and some others 
classmates in a class that he did to explain the homwork.
We also used the teacher's work in class as a base */


//librerias
#include <stdio.h>
#include <math.h>

#define K 15  //we define k where it says that the program will print 15 numbers

// variables
void primo (int n);
void binary (int j);

int main (){
	primo(K); //calls the function
	return 0;
}

void binary(int j) {
	int i = 0; //counts the characters
	int base[9]={0}; //it is the number of places or spaces that we have to put the numbers
	int num = j;
	int x;

	//operations to find the binary
		while (num>0) {
		base[i]=num%2; //takes the residual part of the division
		num/=2;
		++i; //the position is adding one
	}

	//To finally make it binary we need to change the order of the past operation
	//for example: if we obtain 1234 in the past step, in the next one we will obtain 4321

	for (x = 8; x >= 0; --x) {
		printf("%01d", base[x]);
	}
	printf("\n");
}

void primo (int k) {
	int co, i, warn, sr;
	int n = 1;
	co = 1;

	while (co <= k){
		sr = sqrt (n);
		warn = 0;  //it is like we have a prime number

		for (i = 2; i <= sr; i++){
			if (n%i == 0){
				warn = 1;
				break;
			}
		}

	if (warn == 0) { //if it is prime
	binary(n); //if it is prime it goes to this function
	co++; //it add prime numbers
	}
	n++; //goes to the next number
		}


}
