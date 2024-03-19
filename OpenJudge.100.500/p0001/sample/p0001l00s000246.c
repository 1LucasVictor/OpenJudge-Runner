#include <stdio.h>

int main()
{
	double a, b, i, keta, sum;
	
	while (scanf("%lf %lf", &a, &b) != EOF){
		keta = 1;
		
		sum = a + b;
		
		while (sum > 9){
			sum /= 10;
			keta++;
		}
		
		printf("%.0lf\n", keta);
	}
	return (0);
}