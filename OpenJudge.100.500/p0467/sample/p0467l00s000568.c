#include<stdio.h>
int main(){
	long int a,b,c,k;
  scanf("%ld %ld %ld %ld",&a,&b,&c,&k);
  if(a>k){
    printf("%ld",k);
    return 0;
  }
  else if(a+b>=k){
    printf("%ld",a);
    return 0;
  }
  else
    printf("%ld",a+(k-(a+b))*(-1));
}