#include <stdio.h>
int main(void){
	int n;
	scanf("%d\n",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d ",&a[i]);
	}
	int b[n];
	int j;
	for(j=0;j<n;j++){
		b[j] = a[n-1-j];
	}
	int k;
	for(k=0;k<n;k++){
		if(k==n-1){
			printf("%d\n",b[k]);
		}else{
			printf("%d ",b[k]);
		}
	}
	return 0;
}