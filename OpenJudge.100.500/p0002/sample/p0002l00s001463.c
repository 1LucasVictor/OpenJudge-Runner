#include <stdio.h>

int main()
{
	int i,j,a[1000],b[1000],c[1000];
	
	scanf("%d",&i);
	j=i;
	
	for(;i!=0;i--)
	{
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
	}
	
	for(;j!=0;j--)
	{
		if(a[j]*a[j]+b[j]*b[j]==c[j]*c[j])	printf("YES");
		else if(b[j]*b[j]+c[j]*c[j]==a[j]*a[j])	printf("YES");
		else if(c[j]*c[j]+a[j]*a[j]==b[j]*b[j])	printf("YES");
		else printf("NO");
		printf("\n");
	}
	
	return 0;
}