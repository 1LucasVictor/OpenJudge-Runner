#include<stdio.h>

int main(void){
  int x,i=1,n,k,stop=0;
  scanf("%d",&n);
  for (i = 1; i<=n ; i++){
    for (k=i ; k > 0 ; k/=10){
      if(k % 3 == 0 || k % 10 == 3){
            printf(" %d",i);
            stop = 1;
      }
      if(stop==1) {
        stop=0;
        break;
      }
    }
  }
  printf("\n");
  return 0;
}