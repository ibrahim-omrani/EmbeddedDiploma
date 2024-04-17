/*
 * module2.c
 *
 *  Created on: Apr 17, 2024
 *      Author: iomrani
 */

#include "module2.h"

void Dio_Write_Logic(void (*PtrFun)(void)){

	printf("hello from dio write logic \n");
	PtrFun();


}
