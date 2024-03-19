#include<stdio.h>

int main(void)
{
	int a;
	int b;
	int count;
	int num;
	
	while(scanf("%d %d", &a, &b) != EOF){
		num = a + b;
		count = 0;
		
		while (num > 0){
			count++;
			num /= 10;
		}
		
		printf("%d\n", count);
	}
	return (0);
}