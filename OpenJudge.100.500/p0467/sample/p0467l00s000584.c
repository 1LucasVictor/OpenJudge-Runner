#include<stdio.h>
int main(){
long long int a,b,c,k;
scanf("%lld%lld%lld%lld", &a, &b, &c, &k);
  
    if(a+b>=k){
      printf("%lld\n",a);
      return 0;
    }
    else{
      printf("%lld\n",a-(k-a-b));
    return 0;
    }
  
}

