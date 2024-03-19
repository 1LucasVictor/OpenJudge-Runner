#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
 long long a,b,c,k;
 scanf("%lld%lld%lld%lld",&a,&b,&c,&k);
 long long ans=0;
 long long cnt=k;
 if(a>=cnt){
  printf("%lld\n",cnt);return 0;}
  
 else{
  ans+=a;
  cnt-=a;
  if(b>=cnt){
   printf("%lld\n",ans);return 0;}
  else{
   printf("%lld\n",ans-cnt+b);return 0;}
 }
  
  
return 0;}