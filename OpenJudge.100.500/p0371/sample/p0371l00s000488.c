#include<stdio.h>
int main(void){
int n,d,i,max=-1000000,min=1000000,sum=0;
scanf("%d",&i);
for(n=0;n<i;n++){
scanf("%d ",&d);
if(d>max){max=d;}
if(min>d){min=d;}
sum+=d;
}
printf("%d %d %d\n",min,max,sum);
return 0;
}