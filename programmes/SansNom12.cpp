#include<stdio.h>

int main(){
	int j,i,n,tmp,tab[50];
     printf("Saisir la taille du tableau:\n");
     scanf("%d",&n);
     
    for(i=0;i<n;i++){
    	printf("saisir de la colonne numero %d:\n",i);
    	scanf("|%d|",&tab[i]);
	}
	  printf("affichage avannt le tri\n");
	  for(i=0;i<n;i++){
    	printf("%d:\n",tab[i]);
    
	}
     
	//affichage tri bulles
	
	
	for(i=n-1;i>=0;i--){
		for(j=1;j<=i;j++)
		{
			if(tab[j-1]>tab[j]){
				tmp=tab[j-1];
				tab[j-1]=tab[j];
				tab[j]=tmp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("|%d|",tab[i]);
	}
}

