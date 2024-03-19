#include <stdio.h>

int main(void)
{
	int count;
	int i;
	int n;
	
	while (scanf("%d", &n) != EOF){
		count = 0;
		i = 0;
		while (i < 10000){
			if (((i / 1000) + ((i / 100) % 10) + ((i / 10) % 10) + (i % 10)) == n) count++;
			i++;
		}
		
		printf("%d\n", count);
	}
	
	return (0);
}