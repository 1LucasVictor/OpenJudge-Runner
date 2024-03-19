#include<stdio.h>

void main(){
 int t;
 scanf("%d",&t);
 printf("%d",t%2==0?t/2:(t/2)+1);
}