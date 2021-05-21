#include<stdio.h>

int main(){int m,j,i,n,temp,tab[50];
     printf("Saisir la taille du tableau:\n");
     scanf("%d",&n);
     
    for(i=0;i<n;i++){
    	printf("saisir de la colonne numero %d:\n",i);
    	scanf("%d",&tab[i]);
	}
	  printf("tableau \n");
	  for(i=0;i<n;i++){printf("%d:\n",tab[i]);}
    
	
}
