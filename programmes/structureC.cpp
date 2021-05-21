#include<stdio.h>
#include<string.h>

struct module{
	char code[50];
	char nom[121212];
     float credit;

};

int main(){
	struct module t;
    printf("###info du premier module###\n\n");
    printf("le code:  ");
	scanf("%s",&t.code);
	printf("le nom:  ");
	scanf("%s",&t.nom);
	printf("le credit:  ");
	scanf("%f",&t.credit);
    printf(" le code est: %s\n\n",t.code);
	printf("le nom est: %s\n\n",t.nom);
	printf(" le credit est: %f\n\n",t.credit);
	
	struct module r;
    printf("###info du second module###\n\n");
    printf("le code:  ");
	scanf("%s",&r.code);
    printf(" le code est: %s\n\n",r.code);
	 
	 printf("le nom:  ");
	scanf("%s",&r.nom);
	printf(" le nom est: %s\n\n",r.nom);
	
	 printf("le credit:  ");
	scanf("%f",&r.credit);
	printf(" le credit est: %f\n\n",r.credit);
}
