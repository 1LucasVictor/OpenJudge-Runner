#include<stdio.h>

int main(){
  long a,b,c,k,ans=0;
  scanf("%ld%ld%ld%ld",&a,&b,&c,&k);
  
  if(k-a>0){
    k-=a;
    ans=a;
    if(k-b>0){
      ans+=k-b;
    }
  }else{ans=k;}
  
  printf("%ld",ans);
}