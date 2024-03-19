#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, st, en, db[1000], sum;
	int *a, i, j, c=0;
	while(1) {
		scanf("%d",&n);
		if (n==0) break;
		a = (int *)malloc( sizeof(int) * n );
		for(i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		db[c] = 0;
		// Set Start Point
		for(i=0;i<n;i++) {
			sum = 0;
			for(j=i;j<n;j++) {
				sum+=a[j];
				if (db[c]<sum) db[c] = sum;
			}
		}
		c++;
	}
	for(i=0;i<c;i++) {
		printf("%d\n",db[i]);
	}
	return 0;
}