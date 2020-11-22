#include "myBank.h"
#include <stdio.h>

double arr[2][50] bank = {0};
int accountCounter=0;	//count the actives account

//open account 
int O (double amount){
	if(accountCounter <50){
		int i=accountCounter;
		arr[0][i]= i+901;
		arr[1][i]= amount;
		printf("Welcome! your account number is: %d",(i+901));
	else{
		printf("This bank is full!");
	}
	return 1;
}


