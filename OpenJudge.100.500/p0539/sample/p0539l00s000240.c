#include<stdio.h>

int main( ){
	int a = 0;
	int flag = 0;
	int i,j = 0;

	scanf("%d",&a);
		for(i = 1 ; i < 10;i++){

			for(j = 1;j < 10;j++){
				if((a / i > 0 && a / i <= 9) && j * (a/i) == a){
					flag = 1;
					break;
				}else{
					flag = 0;
				}
			}
			if(flag == 1) break;


		}

		if(flag == 1){
			printf("Yes\n");
		}else{
			printf("NO\n");
		}

	return 0;
}
