#include<stdio.h>

int main(){
	long int a = 0,sum = 0, min = 1000001,max = -1000001;
	int n ,i;

	scanf("%d",&n);

	for(a = 1; a <= n; a++){
		scanf("%d",&i);
		if(i < min) min = i;
		if(i > max) max = i;
		sum += i;
	}

	printf("%ld %ld %ld\n",min,max,sum);
	
	return 0;
}