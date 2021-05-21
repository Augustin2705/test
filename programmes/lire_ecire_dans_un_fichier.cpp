#include<stdio.h>

int main(){
	FILE* fichier=NULL;
	int age=0;
	/*utilisateuer du programmme saisir son age et l'ecrit dans un fichier*/
	fichier=fopen("C:/Users/orageu/Desktop/programmes/text.txt","w");
    
    printf("quel est votre age?");
    scanf("%d",&age);
    
    fprintf(fichier,"vous avez donc %d,vous etes autorise pour cette fete",age);
    fclose(fichier);
    
    /*lecture dans un fichier*/
    FILE* score=NULL;
    int tab[3]={0};
    
    score=fopen("C:/Users/orageu/Desktop/programmes/score.txt","r");
      fscanf(fichier, "%d %d %d", &tab[0], &tab[1], &tab[2]);
      printf("les meillleurs score sont %d,%d et %d",&tab[0], &tab[1], &tab[2]);
      fclose(score);
    
    
    return 0 ;
}
