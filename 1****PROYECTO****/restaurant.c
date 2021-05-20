/*ANGELA GABRIELA PESINA DE LOS SANTOS - 1947576


RESTAURANT MENU */

//library
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include "res.h"

//principal function 
int main (){
		int op, rep;
		
		do { //open do 
		system("cls"); //clear console 
		
	printf("\t\t***WELCOME TO FIME-STAURANT***\n");
	printf("-----------------------------------------------\n");
	printf("\tChoose an option: (only numbers)\n ");
	
	//principal menu
	printf("\t1. Customer order. \n");
	printf("\t2. Employee options. \n");
	printf("-----------------------------------------------\n");
	scanf("%i", &op);
	
	if(op==1){ //open if 
     custo_order();
	} //close if 
	
	else {
		if(op==2) {//open 2 if 
		em_options();
	} //close 2 if 
	
	 else {
	 printf("TRY AGAIN\nOnly accepts numbers from 1 to 2\n");
	 }
}
printf("\n\nRETURN TO THE PRINCIPAL MENU\n 1. YES, 2. NO\n");
		scanf("%i", &rep);
	
	} //close do
	while (rep == 1); 
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      ////////////////////////////////////CUSTOMER ORDER SECTION //////////////////////////////////////////////////////////////////////////////////////////
void custo_order(){
	
	int op, repetir;
	
	do { //open do 
	system("cls"); //clear console 
	
	printf("\t\t***WELCOME TO THE CUSTOMER ORDER SECTION***\n ");
	printf("-----------------------------------------------\n");
	printf("\tChoose an option: (only numbers)\n");
	printf("\t1. Breakfast menu.\n");
	printf("\t2. Lunch menu.\n");
	printf("\t3. Dinner menu.\n");
	printf("\t4. Drinks menu.\n");
	printf("\t5. Delivery options.\n");
	printf("\t6. Generate final ticket.\n");
	printf("\t7. Give your opinion about the restaurant.\n");
	printf("-----------------------------------------------\n");
	scanf("%i", &op);
	
	
	//CUSTOMER OPTIONS
	switch(op){
		case 1: 
		b_menu();
		break;
		
		case 2:
		l_menu();
		break;
		
		case 3:
		di_menu();
		break;
		
		case 4:
		d_menu();
		break;
		
		case 5:
		deli_menu();
		break;
		
		case 6:
		ticket();
		break;
		
		case 7:
		opinion();
		break;
		
		default:
		printf("\n\nTry again\nOnly accepts numbers from 1 to 6\n");
		break;
	}
	
	printf("\n\n\nRETURN TO THE CUSTOMER OPTIONS\n 1. YES, 2. NO\n");
		scanf("%i", &repetir);
	
}//close do
while (repetir == 1);
	return;
}


//BREAKFAST MENU
void b_menu(){
	
	int bmen, bplatos;
	bpago = 0;
	
	
	printf("\t\t***WELCOME TO THE BREAKFAST MENU***\n");
	printf("-----------------------------------------------\n");
	printf("\tThis is the menu: \n");
	printf("\t1. Eggs (2) with bacon \t $120\n");
	printf("\t2. French toasts (2) \t $100\n");
	printf("\t3. Pancakes (4)  \t $110\n");
	printf("-----------------------------------------------\n");
	
	printf("Which one would you like to eat?\n");
	scanf("%i", &bmen);
	
	printf("How many orders wold you like to have?\n");
	scanf("%i", &bplatos);
	
	switch(bmen) {
		case 1:
		printf("\n\nYou order: Eggs with bacon\n");
		bpago = bplatos * 120;
		break;
		
		case 2:
		printf("\n\nYou order: French toasts\n");
		bpago = bplatos * 100;
		break;
				
	    case 3:
		printf("\n\nYou order: Pancakes\n");
		bpago = bplatos * 110;
		break;
		
		default:
		printf("\n\nTry again\nOnly accepts numbers from 1 to 3\n");
			
	}

	printf("Your payment for breakfast is: $%i\n", bpago);
	printf("\n\n\t***If you finish your order go to the delivery section\n\tin the customer options, if you don't keep buying in customer options'***\n");

}


//LUNCH MENU
void l_menu(){
	
	int lmen, lplatos;
	lpago = 0;
	
	
	printf("\t\t***WELCOME TO THE LUNCH MENU***\n");
	printf("-----------------------------------------------\n");
	printf("\tThis is the menu: \n");
	printf("\t1. Pizza \t\t $200\n");
	printf("\t2. Cheese sandwich \t $100\n");
	printf("\t3. House salad  \t $150\n");
	printf("-----------------------------------------------\n");
	
	printf("Which one would you like to eat?\n");
	scanf("%i", &lmen);
	
	printf("How many orders wold you like to have?\n");
	scanf("%i", &lplatos);
	
	switch(lmen) {
		case 1:
		printf("\n\nYou order: pizza\n");
		lpago = lplatos * 200;
		break;
		
		case 2:
		printf("\n\nYou order: Cheese sandwich\n");
		lpago = lplatos * 100;
		break;
				
	    case 3:
		printf("\n\nYou order: House salad \n");
		lpago = lplatos * 150;
		break;
		
		default:
		printf("\n\nTry again\nOnly accepts numbers from 1 to 3\n");
			
	}

	printf("Your payment for lunch is: $%i\n", lpago);
	printf("\n\n\t***If you finish your order go to the delivery section\n\tin the custuomer options, if you don't keep buying in customer options'***\n");
    
}


//DINNER MENU
void di_menu(){
	
	int dimen, diplatos;
	dipago = 0;
	
	
	printf("\t\t***WELCOME TO THE DINNER MENU***\n");
	printf("-----------------------------------------------\n");
	printf("\tThis is the menu: \n");
	printf("\t1. Hamburger \t\t $110\n");
	printf("\t2. Tacos (5) \t\t $100\n");
	printf("\t3. Buffalo Wings (12)  \t $110\n");
	printf("-----------------------------------------------\n");
	
	printf("Which one would you like to eat?\n");
	scanf("%i", &dimen);
	
	printf("How many orders wold you like to have?\n");
	scanf("%i", &diplatos);
	
	switch(dimen) {
		case 1:
		printf("\n\nYou order: hamburger\n");
		dipago = diplatos * 100;
		break;
		
		case 2:
		printf("\n\nYou order: Tacos\n");
		dipago = diplatos * 100;
		break;
				
	    case 3:
		printf("\n\nYou order: Buffalo Wings \n");
		dipago = diplatos * 110;
		break;
		
		default:
		printf("\n\nTry again\nOnly accepts numbers from 1 to 3\n");
			
	}

	printf("Your payment for dinner is: $%i\n", dipago);
	printf("\n\n\t***If you finish your order go to the delivery section\n\tin the custuomer options, if you don't keep buying in customer options'***\n");
    
}


//DRINKS MENU
void d_menu(){
	
	int dmen, dplatos;
	dpago = 0;
	
	
	printf("\t\t***WELCOME TO THE DRINKS MENU***\n");
	printf("-----------------------------------------------\n");
	printf("\tThis is the menu: \n");
	printf("\t1. Limonade \t\t $70\n");
	printf("\t2. Coke \t\t $60\n");
	printf("\t3. Water  \t\t $30\n");
	printf("-----------------------------------------------\n");
	
	printf("Which one would you like to eat?\n");
	scanf("%i", &dmen);
	
	printf("How many orders wold you like to have?\n");
	scanf("%i", &dplatos);
	
	switch(dmen) {
		case 1:
		printf("\n\nYou order: Limonade\n");
		dpago = dplatos * 70;
		break;
		
		case 2:
		printf("\n\nYou order: Coke\n");
		dpago = dplatos * 60;
		break;
				
	    case 3:
		printf("\n\nYou order: Water \n");
		dpago = dplatos * 30;
		break;
		
		default:
		printf("\n\nTry again\nOnly accepts numbers from 1 to 3\n");
			
	}

	printf("Your payment for drinks is: $%i\n", dpago);
	printf("\n\n\t***If you finish your order go to the delivery section\n\tin the custuomer options, if you don't keep buying in customer options'***\n");
    
}


//DELIVERY MENU
void deli_menu(){
	int delimen;
	delipago = 0;
	
	
	printf("\t\t***WELCOME TO THE DELIVERY***\n");
	printf("-----------------------------------------------\n");
	printf("\tChoose your zone to calculate the delivery price: \n");
	printf("\t1. Eat in the restaurant \t$0\n");
	printf("\t2. San Nicolas\t\t\t$30\n");
	printf("\t3. Escobedo \t\t\t$40\n");
	printf("\t4. Santa Catarina \t\t$60\n");
	printf("\t5. Apodaca \t\t\t$45\n");
	printf("\t6. San Pedro \t\t\t$70\n");
	printf("-----------------------------------------------\n");
	
	printf("Select your option\n");
	scanf("%i", &delimen);

	
	switch(delimen) {
		case 1:
	      printf("You are going to eat in the restaurant\n");
	      delipago = 0;
		break;
		
		case 2:
	      printf("Your zone is: San Nicolas \n");
	      delipago = 30;
		break;
				
		case 3:
	      printf("Your zone is: Escobedo \n");
	      delipago = 40;
		break;
		
		case 4:
	      printf("Your zone is: Santa Catarina \n");
	      delipago = 60;
		break;
		
		case 5:
	      printf("Your zone is: Apodaca \n");
	      delipago = 45;
		break;
		
		case 6:
	      printf("Your zone is: San Pedro \n");
	      delipago = 70;
		break;
		
		default:
		printf("\n\nTry again\nOnly accepts numbers from 1 to 6\n");
			
	}

	printf("Your payment for delivery is: $%i\n", delipago);
	printf("\n\n\t***If you finish your order go to the ticket section in customer options \n");
    
}



//TICKET MENU
void ticket(){
	pagototal = bpago + lpago + dipago + dpago + delipago;
	
	printf("\t\t***YOUR FINAL TICKET IS: ***\n");
	printf("-----------------------------------------------\n");
	printf("Breakfast menu---------------------$%i\n", bpago);
	printf("Lunch muenu------------------------$%i\n", lpago);
	printf("Dinner menu------------------------$%i\n", dipago);
	printf("Drinks menu------------------------$%i\n", dpago);
	printf("Delivery---------------------------$%i\n", delipago);
	printf("Total:-----------------------$%i\n", pagototal);
	
	return;
		
}


//OPINION MENU
void opinion() {
	
	FILE *pf;
	int r;
	char op[500];
	
	if((pf = fopen("opinion.txt", "w")) != NULL) {
		
		printf("\t***Welcome to the opinion section, This section is completely anonymous, write your opinion about the restaurant and its service***\n\n\n  ");
		printf("Would you like to give your opinion about the restaurant?\n 1. YES, 2. NO\n\n\n");
		scanf("%i", &r);
		
		if (r == 1){
			
			fflush(stdin);
			printf("Write your opinion: \n\n");
			gets(op);
			fputs(op, pf);
			
			}
			fclose(pf);
			printf("\n\n\tSuccessfully created!\n\n");
			}
			else {
				printf("\n TRY AGAIN LATER\n\n");
			}
		
		return; 
		
	}
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      ////////////////////////////////////EMPLOYEE OPTIONS  SECTION //////////////////////////////////////////////////////////////////////////////////////////

void em_options(){
	
	int op, repetir;
	
	do { //open do 
	system("cls"); //clear console 
	
	printf("\t\t***WELCOME TO THE EMPLOYEE OPTIONS***\n ");
	printf("-----------------------------------------------\n");
	printf("\tChoose an option: (only numbers)\n");
	printf("\t1. Check my salary.\n");
	printf("\t2. Review employee discounts.\n");
	printf("-----------------------------------------------\n");
	scanf("%i", &op);
	
	
	//EMPLOYEE OPTIONS
	switch(op){
		case 1: 
    	salary();
		break;
		
		case 2:
	    em_disco();
		break;
		
		
		default:
		printf("\n\nTry again\nOnly accepts numbers from 1 to 2\n");
		break;
	}
	
	printf("\n\n\nRETURN TO THE EMPLOYEE OPTIONS\n 1. YES, 2. NO\n");
		scanf("%i", &repetir);
	
}//close do
while (repetir == 1);
	return;
}

//SALARY SECTION
void salary(){
int op, hor; 
float sal, pago;

	printf("\t\t***SALARY***\n ");
	printf("-----------------------------------------------\n");
	printf("\tSelect your workstation : (only numbers)\n");
	printf("\t1. Cashier.\n");
	printf("\t2. Chef.\n");
	printf("\t3. Waiter.\n");
	printf("\t4. Janitor.\n");
	printf("-----------------------------------------------\n");
	scanf("%i", &op);
	
	printf("\n\tYou have to answer a few questions to calculate your week salary.\n\n");
	printf("How many hours have you worked in the week: \n");
	scanf("%i", &hor);
	
		//start calculating the salary
	switch(op){
		case 1: 
    	sal = 21.40;
    	pago = hor * sal;
		break;
		
		case 2:
	    sal = 24.5;
	    pago = hor * sal;
		break;
		
		case 3:
		sal= 20.50;
		pago= hor * sal;
		break;
		
		case 4:
		sal = 17.30;
		pago = hor * sal;
		break;
		
		default:
		printf("\n\nTry again\nOnly accepts numbers from 1 to 2\n");
		break;
	}
	
	printf("Your hourly pay is: %.2f\n", sal);
	printf("Your worked: %i", hor);
	printf(" hours \n");
	printf("\t Your total payment is: %.2f\n\n", pago );
}

//DISCOUNTS 
void em_disco() {
	float mon;
	
	printf("\t\t***EMPLOYEE DISCOUNTS***\n ");
	printf("-----------------------------------------------\n\n\n\n");	
	printf("How many time have you been working in the restaurant? (in months) ");
	scanf("%f", &mon);
	
	if(mon>=1 && mon<6){
		printf("You can have free delivery to to all available areas once a year,\n Keep working hard!\n\n\n");
	} else {
		if(mon>=6 && mon<12){
		printf("You can have one free meal once a year (including the drink),\n Keep working hard!\n\n\n");	
		} 
		else {
			printf("You can haave free delivery to to all available areas and a free meal twice a year,\n Keep working hard!\n\n\n");
		}
	}
}
