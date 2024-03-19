#include<stdio.h>
int main(void){
	int a[101],b[101],n,i;
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	for(i = 0;i < n;i++){
		b[i] = a[n-(i+1)];
	}
	for(i = 0;i < n;i++){
		printf("%d",b[i]);
		if(i != n-1){
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}