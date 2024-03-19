#include<stdio.h>
 
int main(){
  
 unsigned long long int a,c,ans;
 double b;
 
  (void) scanf("%llu %lf",&a,&b);
  // printf("a=%llu b=%lf  a*b=%llu\n",a,b,a*b);
   c=b*100;
    ans=(a*c)/100;
   
 printf("%llu",ans);
  
 return 0; 
}