#include<stdio.h>
int main(){
	int n,m,j,b,ai,l;
	unsigned long long int  a[101][101], gh[101][101],ans[101][101];
	
	scanf("%d %d %d",&n,&m,&l);
	for(j=0;j<101;j++){
		for(b=0;b<101;b++){
			ans[j][b]=0;
			a[j][b]=0;
			gh[j][b]=0;
		}
	}
	for(j=0;j<n;j++){
		for(b=0;b<m;b++){
			scanf("%d",&a[j][b]);
		}
	}
	for(j=0;j<m;j++){
		for(b=0;b<l;b++){
			scanf("%d",&gh[j][b]);
		}
	}
	for(j=0;j<n;j++){
		for(b=0;b<l;b++){
			for(ai=0;ai<m;ai++){
				ans[j][b]+=a[j][ai]*gh[ai][b];
			}
		}
	}
		for(j=0;j<n;j++){
			for(b=0;b<l;b++){
				if(b==0){printf("%llu",ans[j][b]);
				}
				else{
					printf(" %llu",ans[j][b]);
				}
			}printf("\n");
		}
		scanf("%d",&n);
	return 0;
}
