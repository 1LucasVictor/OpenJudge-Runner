#include<stdio.h>

int main(void){
	int a = 0;
	int flag = 0;
	int i,j = 0;

	scanf("%d",&a);
	for(i = 1 ; i < 10;i++){
		for(j = 1;j < 10;j++){
			if(i*j == a){
				flag = 1;
				printf("Yes\n");
				break;
			}else{
				flag = 0;
			}
		}
		if(flag == 1) break;
	}

	if(flag == 0){
		printf("No\n");
	}

	return 0;
}
