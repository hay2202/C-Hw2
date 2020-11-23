#include <stdio.h>
#include "myBank.h"
#include <stdbool.h>

int main(){
char type = ' ';
bool flag = true;
int account=0;

while(flag){
	printf("Welcome to our bank! Please tap Transaction type. \n");
	scanf("%c",&type);
	switch(type)
	{
		case 'O':
			O();
			break;
		case 'B':
                        printf("insert account number");
                        scanf("%d", &account);
                        B(account);
                        break;
		case 'D':
                        printf("insert account number");
                        scanf("%d", &account);
                        D(account);
                        break;
                       
		case 'W':
                        printf("insert account number");
                        scanf("%d", &account);
                        W(account);
                        break;
		case 'C':
			printf("insert account number");
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
			flag=false;
                        break;
		}
	}
return 0;
}		

