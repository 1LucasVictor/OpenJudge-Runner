#include <stdio.h>

int main(void)
{
	long a, b, tmp, i;
	
	while (scanf("%ld %ld", &a, &b) != EOF){
		if (a < b){
			tmp = a;
			a = b;
			b = tmp;
		}
		
		tmp = a * b;
		
		i = a % b;
		while (i != 0){
			a = b;
			b = i;
			i = a % b;
		}
		
		printf("%ld %ld\n", b, tmp / b);
	}
	
	return (0);
}