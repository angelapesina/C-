//Verify that the expression getchar() != EOF is 0 or 1.

#include <stdio.h>
#include <stdlib.h>
int main (){
	int input;
	
	printf("Input a text or Ctrl+z to indicate EOF\n");
	scanf("%d", &input);

   
	while ((input = getchar()) != EOF) {
		printf("The value of getchar() != EOF is %d. \n", (input != EOF));
		getchar();
	}
	
   
	printf("The value of getchar() != EOF is %d. \n", (input != EOF));

	system("pause");
	return 0;	
	
}
