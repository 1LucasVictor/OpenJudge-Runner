#include <stdio.h>
int main(void)
{
  int i,j,k=0,l,m,n;
  scanf("%d",&i);
  for(j=1;j<=i;j++){
    if(j%3==0){
      printf(" %d",j);
      k=1;
    }
    n=j;
    for(l=0;l<4;l++){
      m=n%10;
      if(m==3&&k==0){
        printf(" %d",j);
        k++;
      }
      n=n-m;
      n=n/10;
    }
    k=0; 
  }
  printf("\n");
  return 0;
}