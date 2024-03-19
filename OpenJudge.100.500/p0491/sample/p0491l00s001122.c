#include<stdio.h>
int main(){
  long int a,b,ans;
  scanf("%ld%ld",&a,&b);
  while(a>=b)
    a-=b;
  if(a>=b/2)
    ans=b-a;
  else ans=a;
  printf("%ld",ans);
  return 0;
  }