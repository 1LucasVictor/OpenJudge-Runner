#include<stdio.h>

int main(){
  
  long long a,b,c;
  
  scanf("%lld %lld.%lld",&a,&b,&c);
  //printf("%lld %lld %lld\n",a,b,c);
  printf("%lld\n",a*(b*100+c)/100);
    
  return 0;
        
}