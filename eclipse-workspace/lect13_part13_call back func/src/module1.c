/*
 * module1.c
 *
 *  Created on: Apr 17, 2024
 *      Author: iomrani
 */
#include "module1.h"
#include <stdio.h>
#include <stdlib.h>

void  Motor_Move_Right(void (*PtrFun)(void)){

	printf("Motor_Move_Right \n");

	// Dio_Write_Logic(&Dio_Notification);

	PtrFun();
}

void Dio_Notification(void){

	printf("dio notification is ok \n");

}
