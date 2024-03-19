#include <stdio.h>

int main(void){
	int n,m = 100000;

	scanf("%d",&n);

	while(n--){
		m *= 1.05;
		if(m % 1000 != 0) m = (m / 1000) * 1000 + 1000;
	}
	printf("%d\n",m);

	return 0;
}