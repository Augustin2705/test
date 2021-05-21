#include <stdio.h>

int main(){
	int age ;
	printf("veuillez saisir votre age:");
	scanf("%d" , &age);
	if(age>=18){ printf("vous etes majeur pour acceder a la fete!"); }
	else if (age==16){ printf("vous ne pourrez que passez 30 mon dans cette fete!"); }
	else{ printf("desole vous etes mineur pour participer a la fete donc rentre chez toi svp!");	}
	return 0 ;
	}

