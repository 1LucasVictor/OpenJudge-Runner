#include<stdio.h>
int main(void){
	int n, i, j;
	int a[10000];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	j=n;
	for(i=0;i<n;i++){
		j-=1;
		printf("%d",a[j]);
		if(j==0){
			printf("\n");
		}
		else{
			printf(" ");
		}
	}
	return 0;
}
