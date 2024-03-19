#include <stdio.h>
#include <math.h>

int keta(int num){
	int c;
	if(num < 10) num = 1;
	if(num >= 10 && num < 100) num = 2;
	if(num >= 100 && num < 1000) num = 3;
	if(num >= 1000 && num < 10000) num = 4;
	if(num >= 10000 && num < 100000) num = 5;
	if(num >= 100000 && num < 1000000) num = 6;
	if(num >= 1000000) num = 7;
	
	c = num;
	
	return c;
}

int main(){
	int n, a, b, c;
	
	while(scanf("%d %d",&a, &b)!=EOF){
		c = a+b;
		printf("%d\n", keta(c));
	
  }
	return 0;
}