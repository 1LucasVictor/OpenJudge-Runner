#include<stdio.h>
#include<math.h>
int main(){
	long long a;
	double b;
	scanf("%lli %lf", &a, &b);
	printf("%lli\n", (long long)floor(a * b));

	return 0;
}