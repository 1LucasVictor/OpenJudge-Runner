#include<stdio.h>

int main(void) {
  int A,B,K,i,j=0;
  scanf("%d %d %d",&A,&B,&K);
  for(i=0;i<100;i++) {
    if(i!=0)if(A%i==0 && B%i==0) {
      j++;
  	  if(j==K)printf("%d\n",i);
    }
  }
}