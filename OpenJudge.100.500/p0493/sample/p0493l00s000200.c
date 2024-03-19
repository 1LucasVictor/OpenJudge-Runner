#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	int X;
	scanf("%d",&X);
	int count500 = 0;
	int count5 = 0;
	int sum;
	while(X >= 500){
		X -=500;
		count500++;
	}
	while(X>=5){
		X -=5;
		count5++;
	}
	sum = count500*1000 + count5*5;
	printf("%d\n",sum);
	return 0;
}