#include <stdio.h>

int main(){
	long x, y;
	
	while(scanf("%ld %ld", &x, &y) != EOF){
		long tmp, m, n;
		
		if(x > y){
			m = x;
			n = y;
		}else{
			m = y;
			n = x;
		}
		
		while(n != 0){
			tmp = n;
			n   = m % n;
			m   = tmp;
		}
		
		printf("%ld %ld\n", m, x / m * y);
	}

	return 0;
}