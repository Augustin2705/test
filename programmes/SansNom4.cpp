#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
    setlocale(LC_CTYPE,"");
	int a , b , c  , E ;
	float x , y , z;
printf("saisir a:\n");
scanf("%d" , &a);

printf("saisir b:\n");
scanf("%d", &b);

printf("saisir c:\n");
scanf("%d" , &c);

E=b*b - 4*a*c;
sqrt(E);
printf("votre discriminant est %d\n\n" , E);

x= -b/2*a + sqrt(E)/ 2*a;
y= -b/2*a - sqrt(E)/ 2*a;
z= -b/2*a;

if (E>0){ printf("vous avez deux solutions distincts %f , %f\n\n", x, y); }
else if (E==0){ printf("vous une solution double qui %f , z");}
else if (E<0){ printf(" Donc pas de solution:\n\n");}
if (a=0){printf("ce n'est pas une equation du second degré je ne suis en mesure de le resoudre!\n");}

}
