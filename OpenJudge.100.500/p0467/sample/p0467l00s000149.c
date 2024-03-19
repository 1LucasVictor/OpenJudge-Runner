#include<stdio.h>
int main()
{
	long a,b,c,d,sum;
	scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
  if(a>=d){
    sum=d;
  }
  else if(a+b>=d){
    sum=a;
  }
  else{
    sum=a-(d-a-b);
  }
  printf("%ld",sum);
	return 0;
}