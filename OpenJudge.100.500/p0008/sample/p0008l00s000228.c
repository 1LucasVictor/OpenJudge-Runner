#include<stdio.h>
int flg[1000000];
int main(void)
{
	int n,i,j,cnt;
	while(scanf("%d",&n)!=EOF){
		cnt=0;
		for(i=2;i<=n;i++){
			flg[i]=0;
		}
		for(i=2;i*i<=n;i++){
//			printf("%d\n",i);
			if(flg[i]!=2){
				flg[i]=0;
				for(j=2;j*i<=n;j++){
					flg[j*i]=2;
				}
			}
		}
		for(i=2;i<=n;i++){
			if(flg[i]==0){
				cnt++;
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}