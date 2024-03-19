#include<stdio.h>

int main(void){
  int n,m,i;
  scanf("%d %d",&n,&m);
  if(m==100) m+=1;
  if(n==0){
    printf("%d\n",m);
  }else if(n==1){
    printf("%d\n",m*100);
  }else{
    printf("%d\n",m*10000);
  }
  return 0;
}