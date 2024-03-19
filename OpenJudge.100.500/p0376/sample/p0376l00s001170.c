#include <stdio.h>

int main(void){
	int n,i,j;
	int a[100];	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		j=n-1-i;
		printf("%d ",a[j]);
	}
	printf("%d\n",a[0]);
return 0;
}
