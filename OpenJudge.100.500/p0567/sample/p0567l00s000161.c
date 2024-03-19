#include <stdio.h>
int main(){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
a=c-(a-b);
if(a<0)
a=0;
printf("%d",a);
}