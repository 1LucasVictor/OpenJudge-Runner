#include<stdio.h>
int main(void){
  int i,x=0;
  int line[200];
  scanf("%d",&x);
  for(i=0;i<x;i++){
    scanf("%d",&line[i]);
  }
  for(i=0;i<x/2;i++){
    int h=line[i];
    line[i]=line[x-1-i];
    line[x-1-i]=h;
  }
  for(i=0;i<x;i++){
    if(i)printf(" ");
    printf("%d",line[i]);
    }
  printf("\n");
  return 0;
}

