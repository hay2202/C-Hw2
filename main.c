#include <stdio.h>
#include "myBank.h"
#include <stdbool.h>

int main(){
char type = ' ';
bool flag = true;
int account=0;

printf("Welcome to our bank! Please tap Transaction type. \n");
scanf(" %c",&type);

while(flag){

	switch(type)
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
                        C(account );
                        break;

	       	case 'I':
                        I();
                        break;

		case 'P':
                        P();
                        break;
		case 'E':
                        E();
                        printf("The program is over .\n");
			            flag=false;
                        break;
		}
		if(flag != false){
	   	 printf("Please tap Transaction type: \n");
     	  	 scanf(" %c",&type);
		}
	}
return 0;
}

