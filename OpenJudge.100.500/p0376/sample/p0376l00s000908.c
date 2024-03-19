#include <stdio.h>
int main(){
	int n,i,data[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&data[i]);
	}
	for(i=n-1;i>=0;i--){
		printf("%d",data[i]);
		if(i!=0){
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}
