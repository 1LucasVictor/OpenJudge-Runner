#include<stdio.h>
int main(){
	int Array[100];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&Array[i]);
	}
	for(i=n-1;i>0;i--){
		printf("%d ",Array[i]);
	}
	printf("%d\n",Array[0]);
}