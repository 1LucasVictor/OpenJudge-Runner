#include <stdio.h>
#include <stdlib.h>

int conbi(int);

int main(void) {
	int num = 0;
	while (scanf("%d",&num) != EOF){
		conbi(num);
	}
	return 0;
}

int conbi(int num){
	if (num < 0 || num > 36){
		printf("%d\n",0);
	}
	int i = 0,j = 0,k = 0,l = 0,cnt=0;
	for(i = 0;i < 10;i++){
		for(j = 0;j < 10;j++){
			for(k = 0;k < 10;k++){
				for(l = 0;l < 10;l++){
					if((i + j + k + l) == num){
						cnt = cnt + 1;
					}
				}
			}
		}
	}
	printf("%d\n",cnt);
	return 0;
}