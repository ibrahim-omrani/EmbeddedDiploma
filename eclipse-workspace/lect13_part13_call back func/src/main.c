/*
 ============================================================================
 Name        : lect13_part13_call.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "module1.h"

void Motor_Notification1(void);
void Motor_Notification2(void);



int main(void) {

	Motor_Move_Right(&Motor_Notification1);

	Motor_Move_Right(&Motor_Notification2);
}
void Motor_Notification1(void){

	printf("Motor Notification (1) is OK \n");

}


void Motor_Notification2(void){

	printf("Motor Notification (2) is OK \n");

}
