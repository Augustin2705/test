#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_CTYPE,"");
	int a , b , A , S , M , CHOIX;
	printf("==MENU DE CACUL==\n\n");
	
	printf("1.Additon!\n");
	printf("2.Soustraction!\n");
	printf("4.Multiplication!\n\n");
	printf("veuillez saisir votre entier\n");
	scanf("%d", &a);
	printf("veuillez saisir un autre entier\n");
	scanf("%d" , &b);
	A=a+b;
	S=a-b;
	M=a*b;
	
	printf("veuillez saisir un nombre pour faire les opérations\n");
	scanf("%d" , &CHOIX);
	
	
	
	switch(CHOIX)
	{case 1:
		 printf("vous avez chosi addition\n");
		 printf("la solution de l' opération Addition est %d" , A);
		 break;
	  case 2:
	  	printf("vous avez choisi ma soustraction\n");
		printf("la solution de l'opération Soustraction est %d" , S);
		break;
	case 3:
	   printf("vous avez choisi la multiplication\n");
	   printf("la solution de l'opération multiplication est %d" , M);
	   break;
	default:
		printf("vous avez fait un mauvais choix. Veuillez taper une nouvelle fois\n");
		break;
		
	   	
	 
	}
	
}
