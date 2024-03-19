#include <stdio.h>

int main(void) {
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	int a[n];
	int b[m];
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<m;i++){
		scanf("%d", &b[i]);
	}
	int c, d, go, fa;
	c = 0;
	d = 0;
	go = 0;
	do{
		if(k >= a[c] || k >= a[d]){
			if(a[c] < a[d]){
				go = go + a[c];
				c++;
			}
			else{
				go = go + a[d];
				d++;
			}
			fa = k - go;
		}
		else{
			fa = k;
		}
	}while(fa >= a[c] || fa >= a[d]);
	printf("%d", c+d);
	return 0;
}
