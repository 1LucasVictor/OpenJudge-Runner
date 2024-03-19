#include <stdio.h>
int main(void){
	int n,i,g[10001]={0},k[10001]={0},d=0,u=0,z=0,o=0;
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		g[i]=0+i;
	}
	for(i=0;i<n+1;i++){
		for(z=1;z<10;z++){
		if(g[i]==(30+z)){
			k[d]=g[i];
			d++;
			u++;
		}
		}
		 if(g[i]%3==0||g[i]%10==3){
			k[d]=g[i];
			d++;
			u++;
		}
	}
		for(d=0;d<u-1;d++){
		printf(" %d",k[d+1]);
		}
		printf("\n");
	return 0;
}