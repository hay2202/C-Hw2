#include <stdio.h>
#include "myBank.h"
#include <stdbool.h>

char type = "";
bool flag = true;
int account=0;
double amount=0;

while(flag){
	printf("Welcome to our bank! Please tap Transaction type. \n");
	scanf("%c",&type);
	switch(type)
	{
		case O:
			printf("insert amount");
			scanf("%0.2f", &amount);
			O(amount);
			break;
		
		case B:
                        printf("insert account number");
                        scanf("%d", &account);
                        B(account);
                        break;
		case D:
                        printf("insert amount");
                        scanf("%0.2f", &amount);
                        D(amount);
                        break;
                        

