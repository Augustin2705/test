#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	const int max=100 , min=1;
	int nombremystere=0 , entrenombre=0;
	nombremystere=(rand() %(max - min + 1))+ min ;
	
	do
	{
		printf("veuillez saisir un nombre entre 1 et 100 pour commencer le jeu!\n\n");
		scanf("%d", &entrenombre);
		if(nombremystere<entrenombre);
	{ 	printf("c est pas le nombre mystere!\n\n");
	}
		else if (nombremystere>entrenombre);
		{ printf("c est pas le nombre mystere!\n\n");
		}
		else("bravo vous a gagne --le nombre mystere !!!!! felication\n\n");
		
	}while(nombremystere!=entremystere);
	return 0 ;
	
	
}
