#include <stdio.h>

int main(void) {
	int a, b, c, k, i;
	int fa, wa;
	scanf("%d%d%d%d", &a, &b, &c, &k);
	if(a <= k){
		wa = a;
		fa = k - a - b;
		if(fa > 0){
			for(i=0;i<fa;i++){
				wa--;
			}
		}
	}
	else{
		for(i=0;i<k;i++){
			wa++;
		}
	}
	printf("%d", wa);
	return 0;
}
