#include<stdio.h>
#include<math.h>
int main(){
int n,d;
  scanf("%d %d",&n,&d);
  int count=0;
  for(int i=0;i<n;i++){
    long long int x,y;
    long double z;
  scanf("%lld %lld",&x,&y);
  z=x*x+y*y;
    z=sqrt(z);
    if(z<=d)
      count++;
  }
  printf("%d",count);
}
