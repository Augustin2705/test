#include<stdio.h>



int main(){
	int ventes[5][4], i, j;
	
	for (i=0;i<5;i++){
		printf("les elements de la ligne %d",i);
		for(j=0;j<4;j++){
			printf("ligne %d, colonne %d?\n",i,j);
			scanf("%d",&ventes[i][j]);
		}
		
	}
	//affichage des éléments du tableau
		for (i=0;i<5;i++){
		for(j=0;j<4;j++){
			printf("%d\t",ventes[i][j]);}
			printf("\n");}
		
	
}
