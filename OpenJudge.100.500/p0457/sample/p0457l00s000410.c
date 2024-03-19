#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n, m;
	long k;
	long *a;
	long *b;
	scanf("%d", &n);
	scanf("%d", &m);
	scanf("%ld", &k);
	a = (long *)malloc(sizeof(long) * n);
	b = (long *)malloc(sizeof(long) * m);
	for(int i=0; i<n; i++){
		scanf("%ld", &a[i]);
	}
	for(int j=0; j<m; j++){
		scanf("%ld", &b[j]);
	}
	int p = 0;
	int q = 0;
	long sum = 0;
	while(1){
		if(p == n && q == m){
			break;
		}
		else if(q == m){
			if(sum+a[p] > k){
				break;
			}
			sum += a[p];
			p++;
		}
		else if(p == n){
			if(sum+b[q] > k){
				break;
			}
			sum += b[q];
			q++;
		}
		else if(a[p] < b[q]){
			if(sum+a[p] > k){
				break;
			}
			sum += a[p];
			p++;
		}
		else if(a[p] >= b[q]){
			if(sum+b[q] > k){
				break;
			}
			sum += b[q];
			q++;
		}
	}
	printf("%d\n", p+q);
	return 0;
}