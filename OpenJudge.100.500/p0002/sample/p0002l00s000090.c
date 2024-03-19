#include <stdio.h>

int main(void)
{
	int N, a[1000], b[1000], c[1000], i;
	scanf("%d", &N);
	for(i=0;i<N;i++) {
		scanf("%d %d %d", &a[i], &b[i], &c[i]);
		a[i]=a[i]*a[i];
		b[i]=b[i]*b[i];
		c[i]=c[i]*c[i];
	}
	for(i=0;i<N;i++) {
		if(a[i]==b[i]+c[i]||b[i]==c[i]+a[i]||c[i]==a[i]+b[i]) 
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}