#include<stdio.h>
int main(){
	int i,n,a[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(i=n;1<=i;i--){
		printf("%d",a[i]);
		if(i!=1){
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}