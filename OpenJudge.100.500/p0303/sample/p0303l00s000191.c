#include <stdio.h>

int isload(int);

int n, k, w[100000];

int main(void)
{
	int i, P, wmax=1, wave=0;
	
	scanf("%d %d",&n,&k);
	for (i=0; i<n; i++) {
		scanf("%d",&w[i]);
		if(wmax<w[i]) wmax = w[i];
		wave += w[i];
	}
	wave /= k;
	if(wave > wmax) P = wave;
	else P = wmax;
	while (isload(P)==0) {
		P++;
	}
	
	printf("%d\n",P);
	
	return 0;
}

int isload(int P)
{
	int i, ktemp, wsum;
	
	ktemp = 0;
	wsum = 0;
	i = 0;
	while (i < n) {
		if( wsum + w[i] <= P ) {
			wsum += w[i];
		} else {
			wsum = 0;
			ktemp++;
			if(ktemp >= k) return 0;
			continue;
		}
		i++;
	}
	return 1;
}