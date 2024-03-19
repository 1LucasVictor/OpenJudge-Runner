#include <stdio.h>

int main(void) {
  int i,n,x,y,z;
  scanf("%d",&n);
  for(i=1;i<n+1;i++){
    x=i/10;
    y=i/100;
    z=i/1000;
    if(i%3==0||i%10==3||x%10==3||y%10==3||z%10==3){
      printf(" %d",i);
    }
   }
  printf("\n");
  return 0;
}
