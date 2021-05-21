#include<stdio.h>
#include<stdlib.h>

void tableau(int tab[],int n,int*max,int*min){
	int i;
	*min=tab[0];
	*max=tab[0];
	
	for(i=1;i<n;i++){
		if(*max<tab[i])
		  *max=tab[i];
		if(*min>tab[i])
		*min=tab[i];
	}

}
int main(){
	int t[]={1,23,21,45,7,9,};
	int sup,inf;
	
	tableau(t,6,&sup,&inf);
	printf("min=%d\nmax=%d\n",inf,sup);
}

