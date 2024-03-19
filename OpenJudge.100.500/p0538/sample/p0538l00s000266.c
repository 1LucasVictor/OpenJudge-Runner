#include <stdio.h>
#include <stdlib.h>
int main(){
int i, j;
scanf("%d",&i);
scanf("%d",&j);

 if(1<=i && i<=9 && 1<=j && j<=9) 
   printf(" %d", i * j);
 
 else printf("-1");


return 0;
}