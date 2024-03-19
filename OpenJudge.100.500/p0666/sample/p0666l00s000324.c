#include<stdio.h>
int main(){int x,a,b;char *c[3]={"delicious","safe","dangerous"};scanf("%d%d%d",&x,&a,&b);printf("%s",a<b?(a+x<b?c[2]:c[1]):c[0]);return 0;}