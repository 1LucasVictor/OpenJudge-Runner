#include<stdio.h>
int main(){
  long a,b,c,k,ans;
  scanf("%ld %ld %ld %ld",&a,&b,&c,&k);
  if(k<=a+b){ans=a;}
  if(k>a+b){ans=a-(k-a-b);}
  printf("%ld\n",ans);
}