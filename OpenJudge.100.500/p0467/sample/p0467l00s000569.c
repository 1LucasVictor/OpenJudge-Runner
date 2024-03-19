#include<stdio.h>
int main(void){
long a,b,c,k;
scanf("%ld %ld %ld %ld",&a,&b,&c,&k);
  if(k>a+b) printf("%ld",2*a-k+b);
  else if(k>a) printf("%ld",a);
  else printf("%ld",k);
return 0;
}
