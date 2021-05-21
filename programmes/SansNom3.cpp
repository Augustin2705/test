#include <stdio.h>

int main(){
	int age , argent ;
	printf("veuillez saisir votre age");
	scanf("%d", &age);
	printf("veuillez saisir le montant de votre argent");
	scanf("%d", &argent);
	if (age==30 || argent>1000000){ printf("vous pouvez investir dans notre entreprise"); }
	else{ printf("desole vous ne pouvez pas investir chez nous!");	}
	
	return 0 ;
}
