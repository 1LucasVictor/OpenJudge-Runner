#include<stdio.h>

void main(void)
{
  long int a,b,c,k;
  long int result=0;
  scanf("%ld %ld %ld %ld",&a,&b,&c,&k);
  if(a>=k){
    result=k;
  }else if(a+b>=k){
    result=a;
  }
  else{
    result=a-(k-a-b);
  }
  printf("%ld\n",result);
}
