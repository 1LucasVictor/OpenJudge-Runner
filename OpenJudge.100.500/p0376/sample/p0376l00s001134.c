#include<stdio.h>

int main(void){
	int i,j,ss,array[100]={0};
	//printf("??°?????°");
	scanf("%d",&ss);
	//printf("???:");
	for(i=0;i<ss;i++){
		scanf("%d",&array[i]);
	}
	for(j=ss-1;j>=0;j--){
		printf("%d",array[j]);
		if(j!=0){
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}