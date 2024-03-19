#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
		int a;
		int b;
		int c;
		int d;
		int score;

		scanf("%d",&a);

		b = a/500;

		c = a%500;
		d = c/5;
		score = b*1000 + d*5;

		printf("%d\n",score);


		return 0;
}