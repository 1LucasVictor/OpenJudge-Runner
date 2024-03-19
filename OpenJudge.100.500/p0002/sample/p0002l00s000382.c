#include<stdio.h>
int main()
{
	int N,a,b,c,i,j;
	int a1[1000];
	int b1[1000];
	int c1[1000];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		a1[i]=a;b1[i]=b;c1[i]=c;
	}
	for(i=0;i<N;i++)
	{
		if((a1[i]*a1[i])+(b1[i]*b1[i])==(c1[i]*c1[i]))
		{
			printf("YES");
		}
		else if((b1[i]*b1[i])+(c1[i]*c1[i])==(a1[i]*a1[i]))
		{
			printf("YES");
		}
		else if((c1[i]*c1[i])+(a1[i]*a1[i])==(b1[i]*b1[i]))
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
		puts("");
	}
	return 0;
}