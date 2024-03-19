#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define ll long long int

ll a,b,c,k;

int main(){

  scanf("%lld%lld%lld%lld",&a,&b,&c,&k);

  if(a>=k){
    printf("%lld\n",k);}
  else{
    if(a+b>=k){
      printf("%lld\n",a);}
    else{
      printf("%lld\n",a-(k-a-b));}}

  
  return 0;
}
