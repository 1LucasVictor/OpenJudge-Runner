#include<stdio.h>
int main(){
  int i,count=0;
  int a,b,c,ware;
  scanf("%d %d %d",&a,&b,&c);
  for(i=a;i<=b;i++){
    if(c%i == 0)count++;
  }
  printf("%d\n",count);
  return 0;
}