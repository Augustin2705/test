#include<stdio.h>

int main(){
	  /*lecture dans un fichier*/
     FILE* score= NULL;
     int tab[3]={0};
    
      score=fopen("C:/Users/orageu/Desktop/programmes/score.txt","r");
      
      fscanf(score, "%d, %d  %d", &tab[0], &tab[1], &tab[2]);
      printf("les meillleurs score sont %d,%d et %d",&tab[0], &tab[1], &tab[2]);
      fclose(score);
    
}
