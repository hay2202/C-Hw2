#include "myBank.h"
#include <stdio.h>

double arr[50][2] bank = {0};
int accountCounter=0;	//count the actives account

//open account 
void O (double amount){
	if(accountCounter <50){
		int i=accountCounter;
		arr[i][0]= 1;	// if account is active ,1=on , 0=off;
		arr[i][1]= amount;
		printf("Welcome! your account number is: %d .\n",(i+901));
		accountNumber++;
	else{
		printf("This bank is full! \n");
	}
}

//check amount
void B (int account)
{
    // this is how you access an account because the account number is starting
    //from 901 and the aary contains only up to 50.
    if(arr[account-901]!=0) // if account is exists
    {
        if(arr[account-901][0]==1) // if account is active
        {
            printf("The balance in the account is : %d . \n" ,arr[account-901][1]);
        }
        else
        {
            printf("The account is inactive so it is not "
                   "possible to print a balance . \n");
        }
    }
    else
    {
        printf("The account does not exist .\n");
    }
}

//deposit
void D(int account, double amount){
    if(arr[account-901]!=0) {
        if (arr[account-901][0] == 1) {
            arr[account-901][1]= arr[account-901][1] + amount;
            printf("The new balance after deposit : %d . \n", arr[account-901][1]);
        }
        else
        {
            printf("The account is inactive so it is not "
                   "possible to deposit . \n");
        }
    }
    else
    {
        printf("The account does not exist .\n");
    }
}

//withdraw
void W (int account, double amount)
{
    if(arr[account-901]!=0) {
        if (arr[account - 901][0] == 1){
            if (arr[account-901][1]-amount>=0 ){ // if the balance >=0
                arr[account-901][1]=arr[account-901][1]-amount;
                printf("The balance after pull : %d",arr[account-901][1]);
            }
            else {
                printf("The pull not possible , Not enough money .\n");
            }
        }
        else
        {
            printf("The account is inactive so it is not "
                   "possible to pull \n");
        }
    }
    else
    {
        printf("The account does not exist .\n");
    }
}

//close account
void C (int account)
{
    if(arr[account-901]!=0)
    {
        if(arr[account-901][0]==1){
            arr[account-901][0]=0;
            printf("The account is close . \n");
        }
        else
        {
            printf("The account is already close .\n");
        }
    }
    else
    {
        printf("The account does not exist .\n");
    }
}

//insert rate
void I (double rate)
{
    int i=0;
    // run on all the account
    while (i<accountCounter)
    {
        if(arr[i][0]==1) // if the account is active
        {
            arr[i][1]=((arr[i][1]*rate)/100)+arr[i][1]; // add the rate to amount of account
            i++;
        }
        else{
            i++;
        }
    }
}

//print all actives account
void P()
{
    int i=0;
    while (i<accountCounter)
    {
        if(arr[i][0]==1)
        {
            printf("The number of account is : %d . \n" , (i+901));
            printf("The balance of amount is : %d . \n" , arr[i][1]);
            i++;
        }
        else
        {
            i++;
        }
    }
}

//close & exit
void E()
{
    int i=0;
    while (i<accountCounter)
    {
        if(arr[i][0]==1)
        {
            arr[i][0] =0; // close the account
            i++;
        }
        else
        {
            i++;
        }
    }
}






