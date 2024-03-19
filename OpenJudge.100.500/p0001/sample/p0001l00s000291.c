#include<stdio.h>

int main(void){
	int a, b, c, keta = 0;
	while(scanf("%d%d", &a, &b) != EOF){
		c = a + b;
		while(1){
			c = c / 10;		
			keta++;
			if(c == 0){
				break;
			}
		}
		printf("%d", keta);
		keta = 0;
	}
}