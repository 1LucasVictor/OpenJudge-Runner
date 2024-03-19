#include<stdio.h>

int main(void){
	int i,n,j=0;
	int a[100],b[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		if(i>0)scanf(" ");
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++){
		b[j]=a[(n-1)-j];
	}
	for(i=0;i<n;i++){
		printf("%d",b[i]);
		if(!(i==(n-1)))printf(" ");
	}
	printf("\n");
	return 0;
}
