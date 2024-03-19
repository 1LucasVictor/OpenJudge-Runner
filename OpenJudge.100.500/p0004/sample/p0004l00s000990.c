#include<stdio.h>
int main(){
  
  long long a,b,c,d,e,ans2,ans1,i; 
  
  while(scanf("%lld %lld",&a,&b)!=EOF){
    
    if(b>a){
      c=a;
      a=b;
      b=c;
    }
    
    for(i=a;i<=a*b;i++){
      if(i%a==0 && i%b==0){
	ans2=i;
	break;
      }
    }
    
    while(1){
      c=a%b;
       a=b;
       b=c;
       if(c==0){
	 break;
       }
    }
     ans1=a;
     
     printf("%lld %lld\n",ans1,ans2);
     a=b=c=ans1=0;
     ans2=0;
  }
  
  return 0;
}