#include <stdio.h>

int main(){
	int a, b, c, i, j, gcd, lcm;
	while(scanf("%d %d", &a, &b) != EOF){
		gcd = 0, lcm = 0;
		if(a > b){
			c = a;
			a = b;
			b = c;
		}
		for(i = 1; i <= a; i++){
			if(a % i == 0 && b % i == 0){
				gcd = i;
			}
		}
		i = a;
		while(lcm == 0){
			if(i >= a && i >= b){
				if(i % a == 0 && i % b == 0){
					lcm = i;
				}
			}
			i++;
		}
		printf("%ld %ld\n", gcd, lcm);
	}
	return 0;
}