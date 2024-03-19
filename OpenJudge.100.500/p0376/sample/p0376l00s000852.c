#include<stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=n-1;i>=0;i-=1){
		if(i<n-1)printf(" ");
		printf("%d",a[i]);
	}
	printf("\n");
	
	return 0;
}

