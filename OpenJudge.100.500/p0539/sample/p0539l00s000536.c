#include<stdio.h>

int main(){
	
	int N,i,j;
	scanf("%d",&N);
	
	for(i=1;i<=9;i++){
		for(j=1;j<=9;j++){
			if(i*j==N){
				printf("Yes");
				return 0;
			}
		}
	}
	
	printf("No");
	
	return 0;
}

