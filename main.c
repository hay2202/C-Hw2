#include <stdio.h>
#include "myBank.h"
#include <stdbool.h>

int main(){
    char type;

    bool flag = true;
    int account=0;

    while (flag == true)
    {
        type=' ';
        if(flag == true)
        {
            menu();
            scanf(" %c", &type);
            fflush(stdin);
        }

        switch (type)
        {
            case 'O':
                O();
                break;
            case 'B':
                printf("Please enter account number: ");
                scanf("%d", &account);
                B(account);
                break;
            case 'D':
                printf("Please enter account number: ");
                scanf("%d", &account);
                D(account);
                break;

            case 'W':
                printf("Please enter account number: ");
                scanf("%d", &account);
                W(account);
                break;
            case 'C':
                printf("Please enter account number: ");
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
                flag = false;
                break;
            default:
                printf("Invalid transaction type\n");
                break;
        }
    }

    return 0;
}

