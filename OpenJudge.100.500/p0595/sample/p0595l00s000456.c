#include<stdio.h>

int main(void) {
  int A,B,K,i,j=0;
  scanf("%d %d %d",&A,&B,&K);
  for(i=100;i>0;i--) {
    if(A%i==0 && B%i==0) {
      j++;
  	  if(j==K)printf("%d\n",i);
    }
  }
}
