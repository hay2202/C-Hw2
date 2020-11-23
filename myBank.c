#include "myBank.h"
#include <stdio.h>

double arr [50][2] = {0};
int accountCounter=0;	//count the actives account
double amount;

////////////

////----------------open account---------------------

void O ()
{
    if (accountCounter<50)
    {
            printf("Enter the amount of money you want to deposit");
            scanf(" %lf ", &amount);
            arr[accountCounter][0] = 1.0; // if account is active ,1=on , 0=off;
            arr[accountCounter][1] = amount;// amount of money
            printf("Welcome! your account number is: %d . \n", (accountCounter + 901));
            accountCounter++;
    }
    else
    {
        printf("This bank is full! \n");
    }

}

// check account 
void B (int account)
{
    // this is how you access an account because the account number is starting
    //from 901 and the aary contains only up to 50.
    if((account-901)<accountCounter) // if account is exists
    {
        if(arr[account-901][0]==1.0) // if account is active
        {
            printf("The balance in the account is : %0.2lf . \n" ,arr[account-901][1]);
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
void D(int account){
     if((account-901)<accountCounter) {
        if (arr[account-901][0] == 1.0) {
            printf("Enter the amount of money you want to deposit");
            scanf(" %f ", &amount);
            arr[account-901][1]= arr[account-901][1] + amount;
            printf("The new balance after deposit : %0.2lf . \n", arr[account-901][1]);
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
void W (int account)
{
     if((account-901)<accountCounter) {
        if (arr[account - 901][0] == 1.0){
            printf("Enter the amount of money you want to withdraw");
            scanf(" %f ", &amount);
            if (arr[account-901][1]-amount>=0 ){ // if the balance >=0
                arr[account-901][1]=arr[account-901][1]-amount;
                printf("The balance after pull : %0.2lf",arr[account-901][1]);
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
     if((account-901)<accountCounter) 
    {
        if(arr[account-901][0]==1.0){
            arr[account-901][0]=0.0;
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
void I ()
{
    int i=0;
    double rate=0;
    // run on all the account
    while (i<accountCounter)
    {
        if(arr[i][0]==1.0) // if the account is active
        {
            printf("Enter the amount of money you want to rate");
            scanf(" %f ", &rate);
            arr[i][1]=((arr[i][1]*rate)/100)+arr[i][1]; // add the rate to amount of account
            i++;
        }
        else{
            i++;
        }
    }
}

//print
void P()
{
    int i=0;
    while (i<accountCounter)
    {
        if(arr[i][0]==1.0)
        {
            printf("The number of account is : %d . \n" , (i+901));
            printf("The balance of amount is : %0.2lf . \n" , arr[i][1]);
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
        if(arr[i][0]==1.0)
        {
            arr[i][0] =0.0; // close the account
            i++;
        }
        else
        {
            i++;
        }
    }
}







