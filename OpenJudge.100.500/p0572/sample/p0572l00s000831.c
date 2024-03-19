#include<stdio.h>
int minc(long a,long b){
if(a>b)return b;
  else return a;
}
int main(void){
  long l,r;
  scanf("%ld%ld",&l,&r);
 int  min=2020;
 r=minc(r,l+4038);
  for(long i=l;i<=r;i++){
    for(long j=l;j<=r;j++){
      if(j==i)continue;
      if(i*j%2019<min)min=i*j%2019;
    }
  }
  printf("%d",min);
  return 0;
}
    