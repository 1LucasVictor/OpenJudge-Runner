#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void){
	int a[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--){
		if(i!=n-1) printf(" ");
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}
