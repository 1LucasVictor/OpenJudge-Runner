#include<stdio.h>

int main(){
	int a, b = 100000, i;
	double c;
	scanf("%d", &a);
	for(i = 0; i < a; i++){
		b *= 1.05;
		if(b % 1000 > 0){
			c = b / 1000;
			c++;
			b = c * 1000;
		}
	}
	printf("%d\n", b);
	return 0;
}