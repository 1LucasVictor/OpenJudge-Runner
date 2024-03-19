#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int answer;
	if((1<=a)&&(a<=9)&&(1<=b)&&(b<=9)){
		answer = a*b;
	}
	else answer = -1;
	
	printf("%d\n", answer);
	
	return 0;
}