#include<stdio.h>
int main(){ int a,b; scanf("%d%d",&a,&b); if(a<10 && a>=0 && b<=9 && b>=0) printf("%d",a*b); else printf("-1\n");}