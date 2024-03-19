#include <stdio.h>
#define k 200000
int main()
{
	long long int a[k];
	int N,i,j;
	int flag = 0;
	scanf("%d",&N);
	for(i = 0; i < N; i++)
	scanf("%d",&a[i]);
	for(i = 0; i < N;i++)
		for(j = i+1; j < N; j++)
			if(a[i] == a[j])
			{
			flag = 1;
			break;
			}
	if(flag == 1)
	printf("NO\n");
	else
	printf("YES\n");
}