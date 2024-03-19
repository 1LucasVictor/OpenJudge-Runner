#include<stdio.h>
int main(void){
int a,b,pro;
scanf("%d %d",&a,&b);
if(a>=1&&a<=9&&b<=9&&b>=1) printf("%d",a*b);
else printf("-1");
return 0;
}