#include<stdio.h>
int main()
{
	int n,a[200000]={0};
	int i,j;
	int cnt=0;

	scanf("%d",&n);
	i=0;
	while(scanf("%d",&a[i])){
		i++;
		if(i>=n){break;}
	}
	for(i=1;i<=n;i++){
		cnt=0;
		for(j=0;j<n;j++){
			if(i==a[j]){cnt++;}
		}
		printf("%d\n",cnt);
	}
	return 0;
}