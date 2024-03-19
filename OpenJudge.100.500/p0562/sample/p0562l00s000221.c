#include<stdio.h>

int main(void){
  int a,b,all= 1,i;
  scanf("%d %d",&a,&b);
  for(i = 0;;i++){
    if(all >= b)break;
      else all--,all += a;
  }
  printf("%d\n",i);
}