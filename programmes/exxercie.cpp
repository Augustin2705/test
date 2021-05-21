#include<stdio.h>

struct fraction{
	int num;
	int den;
};

int main(){
	struct fraction a,b,c;
	printf("###fraction###\n\n");
	printf("saisir la valuer du numerateur A\n");
	scanf("%d",&a.num);
	printf("saisir la valeur du denominateur A\n");
	scanf("%d",&a.den);
	printf("saisir la valuer du numerateur B\n");
	scanf("%d",&b.num);
	printf("saisir la valeur du denominateur B\n");
	scanf("%d",&b.den);
	
	c.num=(a.num*b.den)+(b.num*a.den);
	c.den=(a.den*b.den);
	
	printf("le numertaeur de C est %d\n",c.num);
	printf("le denominateur de C est %d\n",c.den);
	
	

	
	
	
	
}
