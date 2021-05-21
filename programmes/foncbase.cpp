#include<stdio.h>
 int triple(int nombre){
 	return 3*nombre;
 }
double convertir(double dollar){
	double francscfa=0;
	       francscfa=555,23;
	return francscfa*dollar;
}
int main(){
	int nombreEntre, nombretriple;
	printf("veuillez entrez un nombre:");
	scanf("%d",&nombreEntre);
	
	nombretriple=triple(nombreEntre);
	printf("le resultat =%d\n",nombretriple);
	printf("###convertisseur##\n");
	double montant;
	
	printf("sasir le montant de dollar a convertir en cfa:");
	scanf("%d",&montant);
	
	printf("la valeur en francs cfa est :%d",convertir(montant));
	

}
