#include <stdio.h>
#include <stdlib.h>



void print_ibrahim(void);
void print_omrani(void);

void (*ptrnames[2])(void);
void (*ptrnames_1[2])(void)={print_ibrahim,print_omrani};


int main(){

	ptrnames[0]=print_ibrahim;
	ptrnames[1]=print_omrani;

	ptrnames[0]();
	ptrnames[1]();



	ptrnames_1[0]();
	ptrnames_1[1]();

	return(0);

}

void print_ibrahim(void){
	printf("ibrahim \n");
}


void print_omrani(void){
	printf("omrani \n");
}
