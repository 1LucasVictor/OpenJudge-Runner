#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define ll long long

int main(){
  ll int x,p=0,pt=0;
  scanf("%lld",&x);
  if(x>=500){
    p = x/500;
    x = x%500;
  }
    if(x>=5){
      pt = x/5;
    }

  printf("%lld",p*1000 + pt*5);
  return 0;
}