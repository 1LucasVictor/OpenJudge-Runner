#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d",&n);
	int i;
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int sa;
	int sa_max;
	int j;
	sa_max=a[1]-a[0];
	for (i = 0; i < n-1; ++i)
	{
		for (j = i+1;j<n;++j)
		{
			sa=a[j]-a[i];
			if (sa>sa_max)
			{
				sa_max=sa;
			}

		}
		
	}
	printf("%d\n",sa_max);
	return 0;
}