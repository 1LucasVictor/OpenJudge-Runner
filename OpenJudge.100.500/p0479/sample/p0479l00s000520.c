#include<stdio.h>

int main(void)
{
	int n,i;
	scanf("%d",&n);

	int a[n-1];
	int b[n];
	for(i=0;i<n;i++){
		b[i]=0;
	}
	for(i=0;i<n-1;i++){
		scanf("%d",&a[i]);
		b[a[i]-1]++;
	}

	for(i=0;i<n;i++){
		printf("%d\n",b[i]);
	}
	return 0;
}
