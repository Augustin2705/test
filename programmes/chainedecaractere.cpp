#include<stdio.h>

int main(){
	/* pour afficher un on utilise le symbole %c*/
	char lettre='A';
	printf("%c\n",lettre);
	
	/*demander a l'utilisateur de saisir uune lettre  et l afficher*/
	char affiche=0;
	scanf("%c",&affiche);
	printf("la lettre taper est %c\n", affiche);
	
	/*pour une chaine de caractre plus simple moyen*/
	char salut[]="bonjour";
	printf("%s\n\n",salut);	
	/*demander a l utilisateur de saisir au clavier son chaine de caractere*/
	char nom[100];
	printf("quel est votre prenom?\n");
	scanf("%s",&nom);
	printf("Bonjour Mr %s,je suis ravis de vous rencontrez",nom);
}
