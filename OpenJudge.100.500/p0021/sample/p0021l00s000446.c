#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i,j,k;
int n,a[5004],x,ans=0;

int main(){
	scanf("%d",&n);
	while(n!=0){
		a[0]=a[1]=0;ans=0;
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
		scanf("%d",&n);
	}
	
	return 0;
}