#include <stdio.h>
#include "myBank.h"
#include <stdbool.h>

int main(){
    char type;

    bool flag = true;
    int account=0;

    printf("Welcome to our bank!\n");
    while (flag == true)
    {
        type=' ';
        if(flag == true)
        {
            printf("\n Please choose Transaction type: \n");
	    printf(" O-open account \n B-balance \n D-deposit \n W-withdraw \n C-close account \n I-insert rate \n P-print actives account \n E-close & exit \n");
            scanf(" %c", &type);
            fflush(stdin);
        }

        switch (type)
        {
            case 'O':
                O();
                break;
            case 'B':
                printf("insert account number: ");
                scanf("%d", &account);
                B(account);
                break;
            case 'D':
                printf("insert account number: ");
                scanf("%d", &account);
                D(account);
                break;

            case 'W':
                printf("insert account number: ");
                scanf("%d", &account);
                W(account);
                break;
            case 'C':
                printf("insert account number: ");
                scanf("%d", &account);
                C(account);
                break;

            case 'I':
                I();
                break;

            case 'P':
                P();
                break;
            case 'E':
                E();
                printf("The program is over.\n");
                flag = false;
                break;
            default:
                printf("Incorrect tapping.\n");
                break;
        }
    }

    return 0;
}

