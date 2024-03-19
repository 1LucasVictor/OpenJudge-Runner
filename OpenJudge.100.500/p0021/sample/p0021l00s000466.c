#include<stdio.h>

int i,j,k;
int n,a[5010],x,ans=0;

int main(){
	while(scanf("%d",&n)!=EOF){
		if(n==0)break;
		a[0]=a[1]=0;ans=-100001;
		for(i=1;i<=n;i++){
			scanf("%d",&x);
			a[i]+=x;
			a[i+1]=a[i];
		}
		for(i=0;i<=n-1;i++){
			for(j=i+1;j<=n;j++){
				if(a[j]-a[i]>ans)ans=a[j]-a[i];
			}
		}
		printf("%d\n",ans);
	}
	
	return 0;
}