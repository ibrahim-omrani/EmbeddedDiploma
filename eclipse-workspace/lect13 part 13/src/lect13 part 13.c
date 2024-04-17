/*
 ============================================================================
 Name        : lect13.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



void print_summing_1(unsigned int num1,unsigned int num2);
void print_summing_2(unsigned int num1,unsigned int num2);

void print_summing(unsigned int num1,
				   unsigned int num2,
				   void (*Ptr_sum)(unsigned int ,unsigned int ));


void (*ptrsumming)(unsigned int ,unsigned int )=print_summing_2;


int main(void) {
	int choice ;

	/*ptrsumming(2,3);*/
	printf("enter methode \n");

	scanf("%i",&choice);

	if (1== choice){
		print_summing(2,3,print_summing_1);

	}
	else if (2==choice){
		print_summing(8,3,print_summing_2);
	}
	else{
		printf("invalide choice");


	}

	/*print_summing(2,3,print_summing_1);
	print_summing(8,3,print_summing_2);*/

	return EXIT_SUCCESS;
}


void print_summing_1(unsigned int num1,unsigned int num2){

	printf(" summing is %i \n", num1+num2);

}

void print_summing_2(unsigned int num1,unsigned int num2){

	printf(" summing equal to =>  %i \n", (num1+num2));

}

void print_summing(unsigned int num1,
				   unsigned int num2,
				   void (*Ptr_sum)(unsigned int ,unsigned int )){

	Ptr_sum(num1,num2);

}
