#include<stdio.h>
int main(){
int a,b,c,d,m,n;
scanf("%d %d %d %d",&a,&b,&c,&d);
if(b>c)
    printf("%d",b-c);
if(b<=c)
    printf("0");
if(b>d)
    printf("%d",d-c);
return 0;
}