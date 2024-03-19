#include<stdio.h>
int main(){
  
  long long a,b,c,d,e,ans2,ans1,i; 
  
  while(scanf("%lld %lld",&a,&b)!=EOF){
    
    if(b>a){
      c=a;
      a=b;
      b=c;
    }

    d=a;
    e=b;

    while(1){
      c=a%b;
       a=b;
       b=c;
       if(c==0){
	 break;
       }
    }
     ans1=a;

     ans2=(d*e)/ans1;
     
     printf("%lld %lld\n",ans1,ans2);
     a=b=c=ans1=0;
     ans2=0;
  }
  
  return 0;
}