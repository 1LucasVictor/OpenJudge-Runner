#include<stdio.h>
int main(void){
  int a,b,c,k;
  scanf("%d %d %d %d",&a,&b,&c,&k);
int sum=0;;
if(k>=a){
  sum=sum+a;
}
//printf("%d\n",sum);
if(k-a-b<c){
  sum=sum+((k-a-b)*-1);
  //printf("%d\n",z*-1);
}
printf("%d\n",sum);
return 0;
}
