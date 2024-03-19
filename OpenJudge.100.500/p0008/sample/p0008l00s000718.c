#include<stdio.h>
#define MAX 100000
int main(void)
{
	int j,k,n,cnt,s[MAX];
	while(scanf("%d",&n)!=EOF) {
		s[1]=0;
		for(j=2;j<=n;j++) {
			s[j]=1;
		}
		for(j=2;j*j<=n;j++) {
			if(s[j]!=0) {
				for(k=2*j;k<=n;k+=j) {
					s[k]=0;
				}
			}
		}
		cnt=0;
		for(j=2;j<=n;j++) {
			if(s[j]==1) {
				cnt++;
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}