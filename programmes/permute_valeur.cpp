
#include <stdio.h>
 
int main(void)
{
    int var1 = 0;
    int var2 = 0;
    int temp = 0;
     
    printf("Saisie nombre 1: ");
    scanf("%d",&var1);
     
    printf("Saisie nombre 2: ");
    scanf("%d",&var2);
     
    temp = var1; 
    var1 = var2;
    var2 = temp;
     
    printf("\nnombre 1: %d\nnombre 2:%d\n",var1,var2);
     
    return 0;
}
