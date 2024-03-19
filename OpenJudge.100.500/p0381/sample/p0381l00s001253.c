#include<stdio.h>

int main(void)
{
	int n,x;
	int a,b,k,k2;
	int ans;

	

	while(1){
		scanf("%d %d",&n,&x);
		ans =0;
		if(n ==0 && x ==0)break;

		if(n  < x){
			for(k=1;k<=n-2;k++){
				a=x-k;
				for(k2=k+1;k2<=n-1;k2++){
					b=a-k2;
					if(b<= n && k2 < b )ans=ans+1;
				}
			}
		}
		printf("%d\n",ans);
	}

	return 0;
}