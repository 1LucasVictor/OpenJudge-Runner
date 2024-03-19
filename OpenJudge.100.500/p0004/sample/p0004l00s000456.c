#include <stdio.h>

int main(){
	int x, y;
	
	while(scanf("%d %d", &x, &y) != EOF){
		int tmp, m, n;
		
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
		
		printf("%d %d\n", m, x / m * y);
	}

	return 0;
}