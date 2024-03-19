#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  int k,a,b,i;
  (void)scanf("%d",&k);
  (void)scanf("%d %d",&a,&b);
  for(i=a;i<=b;i++){
    if(i%k==0){
      printf("OK\n");
      return 0;
    }
  }
  printf("NG\n");
  return 0;
}