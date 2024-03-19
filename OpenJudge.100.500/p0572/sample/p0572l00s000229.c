#include<stdio.h>
int main(){
  int i,j,l,r,min=2019,mod;
  scanf("%d%d", &l, &r);
  for(i=l;i<r;i++){
    for(j=i+1;j<=r;j++){
      mod=(i*j)%2019;
      if(mod<min){
        min=mod;
      }
    }
  }
  printf("%d", min);
  return 0;
}