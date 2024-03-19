#include<stdio.h>
int main()
{
	int n,a,cnt[200001]={0};
	int i,j;

	scanf("%d",&n);
	i=1;
	while(scanf("%d",&a)){
      	cnt[a]++;
		i++;
		if(i>=n){break;}
	}
	for(i=1;i<=n;i++){
		printf("%d\n",cnt[i]);
	}
	return 0;
}
