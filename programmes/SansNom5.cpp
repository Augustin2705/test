#include<stdio.h>

int main(){
	int CHOIX ;
	printf("===MENU DU JEU===\n\n");
	printf("1.Temple Run\n");
	printf("2.God Of War\n");
	printf("3.Candy Crush\n");
	printf("4.Modern Combat\n\n");
	
	printf("veuillez saisir un nombre pour faire choix pour commencer le jeu\n");
	
	scanf("%d" , &CHOIX);
	
	switch(CHOIX)
	{
		case 1 :
			printf("vous avez choisi Temple Run. bon choix!");
			break;
		case 2 :
			printf("vous avez choisi God Of War. Trop de sauce!");
			break;
		case 3 :
			printf("vous avez choisi Candy Crush. Un peu de casse tete!");
			break;
		case 4 :
			printf("vous avez choisi Modern Combat. Au coeur de la guerre!");
			break;
		default :
			printf("vous avez fait un mauvais choix. Veuillez saisir une nouvelle fois merci!");
			break;
			
	}
}
