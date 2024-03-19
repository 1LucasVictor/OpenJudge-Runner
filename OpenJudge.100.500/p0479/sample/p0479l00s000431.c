#include<stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int a;
	int b[n];
	for(int i=0;i<n;i++) {
		b[i]=0;
	}
	for(int i=0;i<n-1;i++){
		scanf("%d",&a);
		b[a-1]=b[a-1]+1;
	}
	for(int i=0;i<n;i++) {
		printf("%d\n",b[i]);
	}
	return 0;
}
	