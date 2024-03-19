#include <stdio.h>

int main(void) {
	int n,b;
	scanf("%d",&n);
	int a[101];
	for(b=0;b<n;b++){
		scanf("%d",&a[b]);
	}
	while(1){
		printf("%d ",a[b-1]);
		b=b-1;
		if(b==1){break;}
	}
	printf("%d\n",a[b-1]);
	return 0;
}