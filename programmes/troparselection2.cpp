#include<stdio.h>

int main(){
		int m,j,i,n,temp,tab[50];
     printf("Saisir la taille du tableau:\n");
     scanf("%d",&n);
     
    for(i=0;i<n;i++){
    	printf("saisir de la colonne numero %d:\n",i);
    	scanf("%d",&tab[i]);
	}
	  printf("tableau \n");
	  for(i=0;i<n;i++){
    	printf("|%d|\t",tab[i]);}
    	for(i=0;i<n;i++){
    		m=i;{
			for(j=i+1;j<n+1;j++){
				if(tab[j]<tab[m]){
					m=j;
				}
			}
			temp=tab[m];
			tab[m]=tab[i];
			tab[i]=temp;}
		}
		 printf("tableau insertion \n");
	  for(i=0;i<n;i++){
    	printf("|%d|\t",tab[i]);}
}
