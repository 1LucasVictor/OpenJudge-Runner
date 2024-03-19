#include<stdio.h>
int main(){

  int a,n,max,min,i;
  long sum;
  
  	scanf("%d",&n);
  	scanf("%d",&a);
  	max = min = sum = a;
  	i = 1;
	
  while(i < n){
  	scanf("%d",&a);
	
	sum += a;
	if(max < a)
		max = a;
	if(min > a)
		min = a;
	i++;
  }
  	printf("%d %d %ld\n",min,max,sum);
return 0;
}

