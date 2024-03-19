#include <stdio.h>

int gcd(int m, int n){
	int r;
	if(m >= n){
		while(m % n != 0){
			r = m % n;
			m = n;
			n = r; 
		}
		return (n);
	}
	else{
		while(n % m != 0){
			r = n % m;
			n = m;
			m = r; 
		}
		return (m);
	}
}

int lcm(int x, int y){
	int j;
	j = x / gcd(x ,y) * y;
	
	return (j);
}

int main(void)
{
	int a;
	int b;
	while (scanf("%d%d",&a, &b) != EOF){
		printf("%d %d\n", gcd(a, b), lcm(a, b));
	}
	
	return (0);
}