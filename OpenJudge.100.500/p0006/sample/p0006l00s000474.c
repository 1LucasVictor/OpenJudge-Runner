
#include<stdio.h>

int main(void){
  int n,i;
  int j=100000;
  scanf("%d",&n);

  for(i=0;i<n;i++){
    j*=1.05;
    if(j%1000!=0){
      j=(j/1000+1)*1000;
    }
  }
  printf("%d\n",j);

  return 0;
}