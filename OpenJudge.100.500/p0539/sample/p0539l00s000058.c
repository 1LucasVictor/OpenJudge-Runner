#include<stdio.h>

int main(void){
	int a = 0;
	int flag = 0;
	int i = 0;

	scanf("%d",&a);

	for(i = 1 ; i < 10;i++){

		if(a / i < 9 && a % i == 0 ){
			flag = 1;
			break;
		}else{
			flag = 0;
		}

	}

	if(flag == 1){
		printf("Yes");
	}else{
		printf("NO");
	}

	return 0;
}
