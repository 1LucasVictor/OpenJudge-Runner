#include<stdio.h>
int main(void){
  int a,b,c,k;
  scanf("%d %d %d %d",&a,&b,&c,&k);
int sum,asum,bsum;
sum=0;
if(k>=a){
  asum=a;
}
//printf("%d\n",sum);
if(k-a-b<c){
  bsum=k-a-b;
  //printf("%d\n",z*-1);
}
sum=asum-bsum;
printf("%d\n",sum);
return 0;
}
