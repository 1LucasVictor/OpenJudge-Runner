#include<stdio.h>

int main(){
	int a, b, temp, digit;
	while(scanf("%d %d", &a, &b) == 2)
	{
		temp = a + b;
		digit = 1;
		while(temp >= 10)
		{
			digit++;
			temp /= 10;
		}
		printf("%d\n", digit);
	}
	
    return 0;
}