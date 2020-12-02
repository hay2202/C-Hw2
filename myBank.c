#include "myBank.h"
#include <stdio.h>

double arr [50][2] = {0};
int accountCounter=0;	//count the actives account
double amount=0;


////----------------open account---------------------

void O ()
{
    double amount1;
    if (accountCounter<50)
    {
        printf("Please enter amount for deposit: ");
       int x = scanf(" %lf", &amount1);
        if (x>0 && amount1>0) 
        {
            arr[accountCounter][0] = 1.0; // if account is active ,1=on , 0=off;
            arr[accountCounter][1] = amount1;// amount of money
            printf("New account number is:  %d . \n", (accountCounter + 901));
            accountCounter++;
        }
        else
            printf("Failed to read the amount \n");
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
    if((account-901)<accountCounter && account > 900) // if account is exists
    {
        if(arr[account-901][0]==1.0) // if account is active
        {
            printf("The balance of account number: %d is: %0.2lf . \n" ,account,arr[account-901][1]);
        }
        else
        {
            printf("Failed to read the account number \n");
        }
    }
    else
    {
        printf("Invalid account number .\n");
    }
}

//deposit
void D(int account){
    if((account-901)<accountCounter && account > 900)
    {
        if (arr[account-901][0] == 1.0)
        {
            printf("Enter the amount of money you want to deposit:  ");
            if (scanf("%lf", &amount) == 1 ) 
                  if (amount > 0 )
                 {
                       arr[account - 901][1] = arr[account - 901][1] + amount;
                      printf("The new balance after deposit : %0.2lf . \n", arr[account - 901][1]);
                 }
                else 
                {
                    printf("Cannot deposit a negative amount.\n ");
                }
            else
            {
                printf("Incorrect tapping of money, failed to open an account.\n");
            }
        }
        else
        {
            printf("The account is inactive so it is not "
                   "possible to deposit . \n");
        }
    }
    else
    {
        printf("Invalid account number \n");
    }
}

//withdraw
void W (int account)
{
    if((account-901)<accountCounter && account > 900) {
        if (arr[account - 901][0] == 1.0){
            printf("Enter the amount of money you want to withdraw: \n");
            if( scanf("%lf", &amount) == 1)
            {
                if (arr[account-901][1]-amount>=0 ){ // if the balance >=0
                    arr[account-901][1]=arr[account-901][1]-amount;
                    printf("The balance after pull : %0.2lf \n",arr[account-901][1]);
                }
                else {
                    printf("The pull not possible , Not enough money .\n");
                }
            }
            else {
                printf("Incorrect tapping of money, failed to open an account.\n");
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
       printf("Invalid account number \n");
    }
}

//close account
void C (int account)
{
    if((account-901)<accountCounter && account > 900)
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
        printf("Invalid account number \n");
    }
}

//insert rate
void I ()
{
    int i=0;
    double rate=0;

    printf("Please enter interest rate: ");
    if( scanf(" %lf", &rate)==1)
    {

        // run on all the account
        while (i < accountCounter) {
            if (arr[i][0] == 1.0) // if the account is active
            {
                arr[i][1] = ((arr[i][1] * rate) / 100) + arr[i][1]; // add the rate to amount of account
                i++;
            } else {
                i++;
            }
        }
    }
    else
    {
      
        printf(" Failed to read the interest rate\n");
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
            printf("The balance of account number %d is: %0.2lf \n" , (i+901),arr[i][1]);
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

void menu()
{
    printf("\n Please choose a transaction type:\n");
    printf(" O-Open Account\n");
    printf(" B-Balance Inquiry\n");
    printf(" D-Deposit\n");
    printf(" W-Withdrawal\n");
    printf(" C-Close Account\n");
    printf(" I-Interest\n");
    printf(" P-Print\n");
    printf(" E-Exit\n");
}







