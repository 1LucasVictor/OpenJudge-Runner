#include <stdio.h>
int main (void){
int a,b;
scanf("%d%d",&a,&b);
int c;
c=a+b;
if(c%2==1){
    printf("IMPOSSIBLE");
}
c/=2;
printf("%d",c);

return 0;
}