#include <stdio.h>

int n;
int x;
int i;
int hoge[256];
main(){
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&x);
		hoge[i]=x;
	}
	for(i= n-1; i>0; i--){
		printf("%d ",hoge[i]);
	}
	printf("%d\n",hoge[0]);
	return 0;
}