#include<stdio.h>
#include<stdlib.h>
#include<math.h>
  
  
      
int main(){
 
    long long int a,b,n,s,t,i;
  
    while(scanf("%lld%lld",&a,&b)!=EOF){
 
    if(a>b)t=a;
    if(a<=b)t=b;

	n=1;
 
    for(i=2;i<t;i++){
 
        if(a%i==0&&b%i==0){
            n*=i;
            t/=i;
            a/=i;
            b/=i;
            i=2;
             
        }
    }
 
 
 printf("%lld %lld\n",n,n*a*b);
    
	}
    return 0;
}