#include <stdio.h>

int main(void)
{
	long int a, b, num1, num2, divisor, multiple;
	
	while (1) {
		if ((scanf("%ld %ld", &a, &b) == EOF))
			break;
		num1 = a; num2 = b;
		
		/** Ååöñ **/
		while (1) {
			if (a > b) 
				a = a - b;
			else if (a < b)
				b = b - a;
			else 
				break;
		}
		divisor = a;
		
		/** Å¬ö{ **/
		if (divisor == 0)
			continue;
		multiple = num1 * num2 / divisor;
		
		printf("%ld %ld", divisor, multiple);
	}
	return 0;
}