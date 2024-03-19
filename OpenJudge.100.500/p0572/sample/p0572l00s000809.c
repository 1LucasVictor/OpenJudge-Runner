#include <stdio.h>
int main() {
	int l,r,min=1000000000;
	scanf("%d%d", &l,&r);
	if (r-l>=2019) {
		min=0;
	} else {
		for (int i = l; i < r; i++) {
			for (int j = i+1; j <= r; j++) {
				if((i%2019)*(j%2019)%2019<min){
					min=(i%2019)*(j%2019)%2019;
				}
			}
		}
	}
	printf("%d\n", min);
	return 0;
}
