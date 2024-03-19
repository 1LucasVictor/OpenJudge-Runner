#include <stdio.h>

int main() {
	int n=0,c=0,i=0, t[1000],d[1000], g=0;
	while(n>=0) {
		scanf("%d",&g);
		if (g==0) {
			n--;
			d[c] = t[n];
			c++;
			if (n==0) break;
		}else {
			t[n] = g;
			n++;
		}
	}
	for(i=0; i<c; i++) {
		printf("%d\n",d[i]);
	}
	return 0;
}