#include <stdio.h>

int main() {
	int i=1, tmp1=1, tmp2=1;
	int n;
	scanf("%d", &n);
	while (tmp1) {
		int x=i;
		if (x%3==0) {
			printf(" %d", i);
			tmp1=0;
		}
		if (tmp1) {
			for (tmp2=1;tmp2;) {
 				if ( x % 10 == 3 ){
 					if (i<=n) printf(" %d", i);
 			   		tmp1=0, tmp2=0;
  				}
  				x /= 10;
  				if (!x) tmp2=0;
  			}
		}
		if (++i <= n) tmp1=1;
	}
	printf("\n");
	return 0;
}