#include<stdio.h>
#include<math.h>
int main(){
  long long n,d,a[200001],b[200001],count=0;
  scanf("%lld %lld",&n,&d);
  for(int i=0;i<n;i++){
    scanf("%lld %lld",&a[i],&b[i]);
    if(a[i]*a[i]+b[i]*b[i]<=d*d){count++;}
  }
  printf("%d\n",count);
}