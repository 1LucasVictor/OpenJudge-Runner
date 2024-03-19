#include <stdio.h>

int main() {
	int n=0 , i, m = 100000;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		m = m*1.05;
		if ( (m%1000) > 0 ) {
			m = m - (m%1000) +1000;
		}
	}
	printf("%d\n",m);
	return 0;
}