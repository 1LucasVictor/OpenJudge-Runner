#include <stdio.h>
int main(){
  long long num;
  int sum;
  while(1){
	scanf("%lld", &num);
	if(num==0)
	  break;
	sum=0;
	while(1){
	  if(num==0)
		break;
	  sum+=(num%10);
	  num/=10;
	}
	printf("%d\n", sum);
  }
  return 0;
}

