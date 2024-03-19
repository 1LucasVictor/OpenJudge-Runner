#include "stdio.h"                                                  
int main(void){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
(a<b && b<c)?puts("Yes"):puts("No");
return 0;
}