#include<stdio.h>

int main(void)
{
	int a, b, c, i, key;
	key = 0;
	scanf("%d %d %d", &a, &b, &c);
	for(i = a; i <= b; i++){
		if(c % i == 0){
			key++;
		}
	}
	printf("%d\n", key);
	return 0;
}