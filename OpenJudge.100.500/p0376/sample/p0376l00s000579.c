#include <stdio.h>

int main(void){

	int n;
	int v[100];
	int i;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
	for(i=0;i<n-1;i++){
		printf("%d ",v[n-1-i]);
	}
	printf("%d\n",v[0]);
	
	return 0;
}