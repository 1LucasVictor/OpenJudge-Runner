#include <stdio.h>

int main(void)
{
	int a, b;
	int sum;
	int keta;
	
	while (scanf("%d %d", &a, &b) != EOF){
		sum = a + b;
		keta = 1;
		while (sum / 10 != 0){
			sum /= 10;
			keta++;
		}
		
		printf("%d\n", keta);
	}
	
	return (0);
}