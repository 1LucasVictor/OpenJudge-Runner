#include<stdio.h>
int N;

int  main(void){
	scanf("%d",&N);
	for(int i=1;i<=9;i++){
		if(N/i<=9){
			if(N%i==0){
				printf("Yes");
				return 0;
			}else{
				continue;
			}
		}else{
			continue; 
		}
	
	}
	printf("No");
	return 0;
}