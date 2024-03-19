#include <stdio.h>
int main(void){
	int x,i;
	long y,c,sum=0,min,max;
	scanf("%d",&x);
	for(i=0;i<x;i++){
		scanf("%d",&y);
		sum += y;
		if(i==0){
			max=y;
			min=y;}
		if(y >= max)
			max = y;
		if(y <= min)
			min = y;}
	printf("%ld %ld %ld\n",min,max,sum);
	return 0;
}
			
		
	