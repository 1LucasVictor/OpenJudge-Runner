#include <stdio.h>

int main(void) {
  int i,n,x,y;
  scanf("%d",&n);
  for(i=1;i<n+1;i++){
    x=i/10;
    y=i/100;
    if(i%3==0||i%10==3||x%10==3||y%10==3){
      printf(" %d",i);
    }
   }
  printf("\n");
  return 0;
}
