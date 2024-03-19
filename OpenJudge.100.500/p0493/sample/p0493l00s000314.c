#include<stdio.h>

int main(void){

  long int x,k,a,b,ans;
  scanf("%ld",&x);

  if(x==0){
    ans=0;
  }
  else{

  a=x/500;
  k=x%(500*a);
  b=k/5;
  ans=a*1000+b*5;
  printf("%ld",ans);

}
  return 0;
}