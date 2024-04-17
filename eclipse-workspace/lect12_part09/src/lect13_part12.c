/* #include <stdio.h>
#include <stdlib.h>

char name_1[5]={1,2,3,4,5};
char name_2[5]={1,2,3,4,5};

void *my_memset(void *StartAdress, unsigned char Value, size_t Length);
void *my_memcpy(void *destAdress, const void * srcAdress, size_t Length);
int my_memcmp(const void *FMemAdress, const void *SMemAdress, size_t Length);



int main()
{
	my_memset(name_1,'5',30);
	printf("%s \n ",name_1);
	printf("%s \n ",name_2);*/
	/*my_memcpy(name_2,name_1,30);
	printf("%s \n ",name_2);
	int retstate = my_memcmp(name_1,name_2,5);
	printf("retstae = %i \n",retstate);

    return 0;
}

void *my_memset(void *StartAdress, unsigned char Value, size_t Length)
{
	unsigned char *tempptr = StartAdress;


	if (NULL == StartAdress){
		printf("memset function failed due null pointer \n");
	}
	else {
			while(Length--){
				*tempptr++ = Value;
			}
	}

	return(StartAdress);

}

void *my_memcpy(void *destAdress, const void * srcAdress, size_t Length){

	unsigned char *tempptrdestAdress = destAdress;
	unsigned char *tempptrsrcAdress = srcAdress;


	if ((NULL == destAdress)||(NULL== srcAdress)){
		printf("memcpy function failed due null pointer \n");
	}
	else {
			while (Length){
				*tempptrdestAdress++ = *tempptrsrcAdress++;
				Length--;
			}
	}


	return(destAdress);
}


int my_memcmp(const void *FMemAdress, const void *SMemAdress, size_t Length){

	int returnstate=0; indicates str1 == str2
	unsigned char *tempFMemAdress=FMemAdress;
	unsigned char *tempSMemAdress=SMemAdress;

	if ((NULL == FMemAdress)||(NULL== tempSMemAdress)){
			printf("my_memcmp function failed due null pointer \n");
		}
		else {
				if (tempFMemAdress==tempSMemAdress){
					returnstate=0;
				}
				else{
					while(Length){
						if(*tempFMemAdress != *tempSMemAdress){
							returnstate=(*tempFMemAdress < *tempSMemAdress) ? -1 : 1 ;
							break;
						}
						else {
							Length--;
							tempFMemAdress++;
							tempSMemAdress++;
						}

					}
				}
		}
	return(returnstate);
}
*/
