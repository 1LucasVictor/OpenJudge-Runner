#include<stdio.h>
int main(){
  int i,n,a,b,count=0;
  scanf("%d%d",&a,&b);
  n=a-1;
  i=0;
  while(1+n*i<b){
    count++;
    i++;}
  printf("%d\n",count);
  return 0;}