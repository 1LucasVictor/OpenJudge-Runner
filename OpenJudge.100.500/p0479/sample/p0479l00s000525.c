#include <stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	int a[N],b[N];
	for (int i = 0; i < N; ++i)
	{
		b[i]=0;
	}

	for (int i = 1; i < N; ++i)
	{
		scanf("%d",&a[i]);
		b[a[i]-1]++;
	}

	for (int i = 0; i < N; ++i)
	{
		printf("%d\n",b[i]);	
	}
	return 0;
}
