#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int L,R,i,j,tmp,min=10000000;
  scanf("%d %d",&L,&R);
  
  for(i=L;i<R;i++){
    for(j=i+1;j<=R;j++){
      tmp=(i*j)%2019;
      if(tmp < min ) min=tmp;
    }
  }
  printf("%d\n",min);
  return 0;
}