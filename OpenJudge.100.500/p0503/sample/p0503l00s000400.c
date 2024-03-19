#include<stdio.h>
int main()
{
	int n,a[200000];
	int i,j,flg=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<=n;j++){
			if(a[i]==a[j]){
				flg=1;
			}
		}
	}
	if(flg==1){
		printf("NO\n");
	}
	else{
		printf("YES\n");
	}
	return 0;
}