#include <stdio.h>

int pnum[1000000];
int psum[1000000];

int main(){
	int n;
	int i,j;
	for(i=0;i<1000000;i++){
		pnum[i]=1;
		psum[i]=0;
	}
	pnum[0]=0;pnum[1]=0;
	for(i=2;i*i<1000000;i++){
		if(pnum[i]!=0){
		for(j=i*i;j<1000000;j+=i){
			pnum[j]=0;
		}
		}
	}
	for(i=1;i<1000000;i++){
		psum[i] = psum[i-1] + pnum[i];
	}
	while(scanf("%d",&n)!=EOF){
		printf("%d\n",psum[n]);
	}
	return 0;
	}