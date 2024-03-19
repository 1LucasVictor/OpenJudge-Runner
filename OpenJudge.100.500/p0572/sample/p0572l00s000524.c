#include<stdio.h>
int min(long long int a,long long int b){
  if(a<b){
    return a;
  }else{
    return b;
  }
}
int main(void)
{
  long long int l,r,i,j;
  int ans=2018;
  scanf("%lld%lld",&l,&r);
  r=min(r,l+4038);//modが同じ数が3つ以上いらない
//  printf("%lld %lld \n" ,l,r);
  for(i=l;i<r;i++){
    for(j=i+1;j<=r;j++){
      int x = i*j%2019;
      ans=min(ans,x);
    }
  }
  printf("%d",ans);
  return 0;
}
