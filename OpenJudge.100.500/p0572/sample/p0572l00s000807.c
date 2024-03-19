#include <stdio.h>
int main() {
	int l,r,min=1000000000;
	scanf("%d%d", &l,&r);
	for (int i = l; i < r; i++) {
		for (int j = l+1; j < r; j++) {
			if(((i%2019)*(j%2019))%2019<min){
				min=((i%2019)*(j%2019))%2019;
				if(min==0){
					break;
				}
			}
		}
	}
	printf("%d\n", min);
	return 0;
}
