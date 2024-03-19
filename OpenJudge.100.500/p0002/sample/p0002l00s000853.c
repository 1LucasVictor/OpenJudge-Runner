#include <stdio.h>
#include <math.h>

int main(void){
	double n, a, b, c;
	int i;
	
	scanf("%lf", &n);
	
	while (n--){
		scanf("%lf %lf %lf", &a, &b, &c);
		
		a = pow(a, 2.0);
		b = pow(b, 2.0);
		c = pow(c, 2.0);
		
		if (a > b && a > c){
			if (b+c == a) printf("YES\n");
			else printf("NO\n");
		}
		else if (b > a && b > c){
			if (a+c == b) printf("YES\n");
			else printf("NO\n");
		}
		else if (c > a && c > b){
			if (a+b == c) printf("YES\n");
			else printf("NO\n");
		}
		else printf("NO\n");
	}
	
	return 0;
}