#include<stdio.h>
int main(void){
	int i,j;
	scanf("%d %d",&i,&j);
	if(i <= 8){
		if(j <= 8){
			printf("Yay!");
		}else{
			printf(":(");
		}
	}else{
		printf(":(");
	}
	return 0;
}