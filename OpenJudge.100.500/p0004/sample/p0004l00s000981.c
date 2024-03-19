#include<stdio.h>
#include<stdlib.h>
#include<math.h>
  
  
      
int main(){
 
    int a,b,n,s,t,i;
  
    while(scanf("%d%d",&a,&b)!=EOF){
 
    if(a>b)t=a;
    if(a<=b)t=b;

	n=1;
 
    for(i=2;i<t;i++){
 
        if(a%i==0&&b%i==0){
            n*=i;
            a/=i;
            b/=i;
            i=2;
             
        }
    }
 
 
 printf("%d %d\n",n,n*a*b);
    
	}
    return 0;
}