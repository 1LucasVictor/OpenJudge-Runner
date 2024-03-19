#include <stdio.h>

int main(){
  int l,r,i,j,mod=3000;
  scanf("%d%d",&l,&r);
  if(r-l>2018)printf("%d\n",0);
  else{
    for(i=l;i<=r;i++)for(j=i+1;j<=r;j++){
      if((i*j)%2019<mod)mod=(i*j)%2019;
    }
    printf("%d\n",mod);
  }
  return 0;
}
