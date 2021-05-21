#include<stdio.h>

int main(){
	int tab[500],i,j,n,v;
	
  printf("Saisir la taille du tableau:\n");
     scanf("%d",&n);
     
    for(i=0;i<n;i++){
    	printf("saisir de la colonne numero %d:\n",i++);
    	scanf("%d",&tab[i]);}
    	
    	for(i=1;i<n-1;i++){
    		v=tab[i];
    		j=i;{
			while(tab[j-1]>v){
				tab[j]=tab[j-1];
				j=j-1;
			}
			tab[j]=v;
			}
			
		}
	
	for(i=0;i<n;i++){
		printf("|%d|", tab[i]);
	}
	}
     
