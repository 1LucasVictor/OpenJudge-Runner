#include <stdio.h>

int main(void) {
	int i,n ,m = 100000,x;
	scanf ("%d",&n);
		for(i = 1; i <= n; i++){
		m = m *1.05;
		x = m % 1000;
		if (x != 0){
			m = m - x + 1000;
		}
		}
		printf("%d\n",m);
	return 0;
}