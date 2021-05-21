#include<stdio.h>

int main(){
	
	/*utilisation de gets*/
	char nom[10];
	printf("quel est votre nom?");
	fgets(nom,10,stdin);
	printf("Mr %s ravis de faire votre connaissance\n",nom);
	
	return 0 ;
	
}
