#include <stdio.h>

int GCD(int m, int n);

int main(void)
{
	int m, n;
	int gcd;
	int lcm;
	
	while (scanf("%d %d", &m, &n) != EOF){
		if (m < n){
			gcd = m;
			m = n;
			n = gcd;
		}

		gcd = GCD(m, n);
		lcm = n * (m / gcd);
		
		printf("%d %d\n", gcd, lcm);
	}
		
	return (0);
}

int GCD(int m, int n)
{
	int r;
	
	while (m % n != 0){
		r = n;
		n = m % n;
		m = r;
    }
	//if (m %  n != 0){
	//	GCD(m, n);
	//}
	
	return (n); 
}