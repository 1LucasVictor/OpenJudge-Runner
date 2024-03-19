#include <stdio.h>

int main(void){
  int l,r,i,j,min=2020;
  scanf("%d%d",&l,&r);

  if(r-l>=2019){
    min=0;
  }
  else{
    for(i=l;i<r;i++){
      for(j=i+1;j<=r;j++){
        if(((i*j)%2019)<min){
          min=(i*j)%2019;
        }
      }
    }
  }
  printf("%d",min);
  return 0;
}
