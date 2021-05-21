#include<stdio.h>

int main(){
     int tab[50],n,i,j,perm;
     printf("Saisir la taille du tableau:\n");
     scanf("%d",&n);
     
    for(i=0;i<n;i++){
    	printf("saisir de la colonne numero %d:\n",i);
    	scanf("%d",&tab[i]);
	}
     
    	
    	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++) 
		{
			if(tab[j]>tab[j+1]) {
				perm=tab[j];
				tab[j]=tab[j+1];
				tab[j+1]=perm;
			}
		}
	}
	printf("\n affichage du tableau du tri:\n");
	for(i=0;i<n;i++){
		printf("|%d|",tab[i]);
	}
	
	
}
