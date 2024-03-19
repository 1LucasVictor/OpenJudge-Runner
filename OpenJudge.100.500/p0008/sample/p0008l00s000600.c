#include<stdio.h>
#define MAX 1000000

int p[MAX];

void prime_number(int p[]){
	int i,j;
	for(i=0;i<MAX;i++)p[i]=0;
	p[0]=1;
	p[1]=1;
	//ツ素ツ青板：0
	for(i=2;i<=MAX/2;i++){//ツ倍ツ青板づ債渉慊つュ
		for(j=2;i*j<=MAX;j++){
			if(p[i*j]==0){
				p[i*j]=1;
			}
		}
	}
	return;
}
int main(void){
	int i,j;
	int n,cnt;

	prime_number(p);
	while(scanf("%d",&n)!=EOF){
		cnt=0;
		for(i=2;i<=n;i++){
			if(p[i]==0){
				cnt++;
			}
		}
		printf("%d\n",cnt);	
	}
	return 0;
}