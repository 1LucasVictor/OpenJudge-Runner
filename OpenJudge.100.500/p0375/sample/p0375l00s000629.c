#include<stdio.h>
int main()
{int i,a;
scanf("%d",&a);
for(i=1;i<=a;i++){
if(i%3==0||i%10==3||i/10==3||i/100==3||i/1000==3)
printf(" %d",i);}
puts(""); return 0;}