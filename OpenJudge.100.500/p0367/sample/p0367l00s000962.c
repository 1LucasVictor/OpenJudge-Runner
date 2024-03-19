#include<stdio.h>
int main(void){
	int i, a, b, c, count = 0;
	for(i = 0;;i++){
		scanf("%d %d %d", &a, &b, &c);
		if(a <= b){
			break;
		}
		else
		{
		}
	}
	for(i = a; i <= b; i++){
		if(c % i == 0){
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}
