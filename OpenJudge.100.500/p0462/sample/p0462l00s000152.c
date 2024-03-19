#include<stdio.h>
 
int main(){
  
 unsigned long long int a,ans;
 double b;
 
  (void) scanf("%llu %lf",&a,&b);
  // printf("a=%llu b=%lf  a*b=%llu\n",a,b,a*b);
   
    ans=a*b;
   
 printf("%llu",ans);
  
 return 0; 
}