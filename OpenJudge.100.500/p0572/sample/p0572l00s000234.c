#include <stdio.h>

int main(void){
  int l,r,i,j,min=2020,mod,flag=0;
  scanf("%d %d",&l,&r);

  /*if(r-l>=2019){
    min=0;
  }
  else{*/
  for(i=l;i<r;i++){
    for(j=i+1;j<=r;j++){
      if(((i*j)%2019)<min){
        min=(i*j)%2019;
      }
      if(min==0){
        flag=1;
      }
    }
    if(flag==1){
      break;
    }
  }
  //}
  printf("%d",min);
  return 0;
}
