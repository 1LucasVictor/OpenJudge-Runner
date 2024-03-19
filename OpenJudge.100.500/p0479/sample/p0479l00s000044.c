#include <stdio.h>


int main(void) {
	int n,x,i;
	int enp[200001];
	
	for(x=0;x<200001;x++)
		enp[x]=0;
	
	scanf("%d",&n);
	
	
	for(i=1;i<n;i++){
		scanf("%d",&x);
		enp[x]++;
	}

	for(x=1;x<=n;x++){
		printf("%d\n",enp[x]);
	}
	
	return 0;
}