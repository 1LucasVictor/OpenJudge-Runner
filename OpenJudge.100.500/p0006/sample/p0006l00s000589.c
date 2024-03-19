#include<stdio.h>

int main(void){
  int n=100000,s,w,i;
  
  scanf("%d",&w);
  for(i=0;i<w;i++){
    n=n*0.05+n;
  }
  n=((n+(10000+1))/10000*10000);
  printf("%d\n",n);
  return 0;
}