#include<stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int a,b[20001]={0};
	for(int i=0;i<n-1;i++){
		scanf("%d",&a);
		b[a]=b[a]+1;
	}
	for(int i=1;i<=n;i++) {
		printf("%d\n",b[i]);
	}
	return 0;
}
	