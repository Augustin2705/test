#include<stdio.h>
#include<math.h>

struct point{
	int x;
	int y;
};

int main(){
	point a,b;
	float x1,x2,r;
	int d;
	printf("veuillez saisir l abscisse du point A:");
	scanf("%d",&a.x);
    
	printf("veuillez saisir l ordonne du point A:");
	scanf("%d",&a.y);
	
	printf("veuillez saisir l abscisse du point B:");
	scanf("%d",&b.x);
    
	printf("veuillez saisir l ordonne du point B:");
	scanf("%d",&b.y);
	
   x1=(a.x+b.x)/2;
   x2=(a.y+b.y)/2;
   printf("le milieu est(%f et %f)",x1,x2);
   
   d=((b.x-a.x)^2)+((b.y-a.y)^2);

   printf("la distance entre ces deux points est:%f",sqrt(d));
	
	
}
