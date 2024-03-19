#include <stdio.h>
int main() {
	int l,r,min=1000000000;
	scanf("%d%d", &l,&r);
	for (int i = l; i < r; i++) {
		if(((i%2019)*((i+1)%2019))%2019<min){
			min=((i%2019)*((i+1)%2019))%2019;
			if(min==0){
				break;
			}
		}
	}
	printf("%d\n", min);
	return 0;
}
