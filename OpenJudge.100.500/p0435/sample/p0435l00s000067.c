#include<stdio.h>
int main(){
  long long n,l,i,c=0,x,y;
  scanf("%lld %lld",&n,&l);
  for(i=0;i<n;i++){
    scanf("%lld %lld",&x,&y);
    if(x*x+y*y<=l*l)c++;
  }
  printf("%lld\n",c);
  return 0;
}
  
